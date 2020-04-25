clc;close all;clear all;
x=[1,5,6,7];
h=[7,8,5,3,7,8];
l=length(x);
m=length(h);
n=max(l,m);
disp(l);
disp(m);
x1=[x,zeros(1,n-l)];
h1=[h,zeros(1,n-m)];
disp(n);
disp(x1);
y=zeros(1,n);
for i=1:n
    for j=1:n
      k=i-j+1;
        if(k<=0)
            k=k+n;
        end
        y(i)=y(i)+x1(j)*h1(k);
    end
end
disp(y);


            
    


