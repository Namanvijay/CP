clc ;close all;clear all;
x=[1,5,6,7];
h=[6,4,3,28,1];
l=length(x);
m=length(h);
x1=[x,zeros(1,m-1)];
disp(x1);
h1=[h,zeros(1,l-1)];
disp(h1);
n=l+m-1;
z=zeros(1,n);
disp(z);
for i=1:n
    
    for j=1:i
        z(i)=z(i)+x1(j)*h1(i-j+1);
    end
end
disp(z);
stem(z);
