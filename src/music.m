%% Load data and parameter initialization
clear;close all;
X_read = zeros(48000,4);
[X_read(:,1), fs] = audioread('test_audio/test_2_ch_1.wav','native');
[X_read(:,2), fs2] = audioread('test_audio/test_2_ch_2.wav','native');
[X_read(:,3), fs3] = audioread('test_audio/test_2_ch_3.wav','native');
[X_read(:,4), fs4] = audioread('test_audio/test_2_ch_4.wav','native');
L = 10;
X = X_read(1:1024*L,:);
[M,N] = size(X);
J = M/L;
senDist = 0.25;
n_source = 2;
Index = linspace(0,N-1,N);
p = [(-(N-1)/2 + Index.')*senDist,zeros(N,1)];
c = 340;
Xl = (zeros(J, N, L));
Xf_l = (zeros(J, N, L));
Xf_j = (zeros(L, N, J));
Rx = zeros(N, N, J);
U = zeros(N, N, J);
eigval = zeros(N, N, J);
eigval_diag = zeros(N, J);
index = zeros(N, J);
Us = zeros(N, n_source, J);
Un = zeros(N, N-n_source, J);
P_smj = zeros(361, J);
wj = zeros(361, J);
w = zeros(361, 1);
theta = -90:0.5:90;
v = [sin(theta*pi/180);-cos(theta*pi/180)];
f1 = [0:J/2-1, -J/2:-1]*fs/J;
%% Short Time Fourier Transform(STFT)
tic;
for l = 1:L
    for n = 1:N
       for j = 1:J
           Xl(j,n,l) = X((l-1)*J+j,n);
       end
    end
    Xf_l(:,:,l) = fft(Xl(:,:,l));
    for j = 1:J
        Xf_j(l,:,j) = Xf_l(j,:,l);
    end
end
%% MUSIC Algorithm
for j = 1:J
    Rx(:,:,j) = (Xf_j(:,:,j).')*(Xf_j(:,:,j).')'./L;
    [U(:,:,j), eigval(:,:,j)] = eig(Rx(:,:,j));
    [eigval_diag(:,j),index(:,j)]  = sort(diag(eigval(:,:,j)),1,'descend');
    U(:,:,j) = U(:,index(:,j),j);
    Us(:,:,j)  = U(:,1:n_source,j);
    Un(:,:,j)  = U(:,n_source+1:N,j);
    f_c = f1(j);
    a_theta = exp(-1j*2*pi*f_c*(p*v)./c);
    wj(:,j) = diag(a_theta'*(Un(:,:,j)*Un(:,:,j)'*a_theta));
    w = w + real(wj(:,j));
end
P_sm = 1./w;
toc;
%% Find the local maximum and visualization
P_middle = abs(P_sm(2:end-1));
P_front = abs(P_sm(1:end-2));
P_back = abs(P_sm(3:end));
logic_front = (P_middle - P_front)>0;
logic_back = (P_middle - P_back)>0;
logic = logic_front & logic_back;
P_middle(~logic) = min(P_middle);
P_local = [abs(P_sm(1));P_middle;abs(P_sm(end))];
[~,doa_Idx] = maxk(P_local,n_source);
doa = theta(doa_Idx);
[~,minIdx] = min(abs(doa));
doa_source = doa(minIdx);
[~,maxIdx] = max(abs(doa));
interfer = doa(maxIdx);
disp(['source DOA = ',num2str(doa_source),' deg, ','interfering DOA = ',num2str(interfer),' deg']);
%% Plot
figure;
linspec = {'b-','LineWidth',2};
plot(theta, 10*log10(abs(P_sm)), linspec{:});
title('Spatial Spectrum');
%% Compensate and Align
Xf = fft(X_read);
M = 48000;
f2 = [0:M/2-1, -M/2:-1]*fs/M;
v = [sin(interfer*pi/180);-cos(interfer*pi/180)];
for m = 1:M
    f_c = f2(m);
    comp_vector = exp(1j*2*pi*f_c*(p*v)./c);
    Xf(m,:) = Xf(m,:).*(comp_vector).';
end
align_out = ifft(Xf(:,2)-Xf(:,3));
soundsc(real(align_out(:,1)),fs);

