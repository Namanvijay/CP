
n=
x=[3 -2 0 1 4 5 2];
subplot(4,1,1);
stem(n,x);
title('x');
y=[0 7 1 -3 4 9 2];
subplot(4,1,2);
stem(n,y);
title('y');
z=x+y;

subplot(4,1,3);
stem(n,z);
title('z');
a=x.*y;
subplot(4,1,4);
stem(n,a);
title('a');