clc;
clear all;
s=input(&#39;Enter symbols- &#39;) %format [&#39;a&#39;,&#39;b&#39;,&#39;c&#39;,&#39;d&#39;,&#39;e&#39;,&#39;f&#39;];
p=input(&#39;Enter value of probabilty- &#39;) %format [0.22,0.20,0.18,0.15,0.13,0.12];
if length(s)~=length(p)
error(&#39;Wrong entry.. enter again- &#39;)
end
i=1;
for m=1:length(p)
for n=1:length(p)
if(p(m)&gt;p(n))
a=p(n); a1=s(n);
p(n)=p(m);s(n)=s(m);
p(m)=a; s(m)=a1;
end
end
end
display(p) %arranged prob. in descending order.
tempfinal=[0];
sumarray=[];
w=length(p);
lengthp=[w];
b(i,:)=p;
while(length(p)&gt;2)
tempsum=p(length(p))+p(length(p)-1);
sumarray=[sumarray,tempsum];
p=[p(1:length(p)-2),tempsum];
p=sort(p,&#39;descend&#39;);
i=i+1;
b(i,:)=[p,zeros(1,w-length(p))];
w1=0;
lengthp=[lengthp,length(p)];
for temp=1:length(p)
if p(temp)==tempsum;
w1=temp;
end
end
tempfinal=[w1,tempfinal]; % Find the place where tempsum has been inserted
display(p);
end
sizeb(1:2)=size(b);
tempdisplay=0;
temp2=[];
for i= 1:sizeb(2)
temp2=[temp2,b(1,i)];
end
sumarray=[0,sumarray];
var=[];
e=1;
for ifinal= 1:sizeb(2)

code=[s(ifinal),&#39; &#39;]
for j=1:sizeb(1)
tempdisplay=0;
for i1=1:sizeb(2)
if( b(j,i1)==temp2(e))
tempdisplay=b(j,i1);
end
if(tempdisplay==0 &amp; b(j,i1)==sumarray(j))
tempdisplay=b(j,i1);
end
end
var=[var,tempdisplay];
if tempdisplay==b(j,lengthp(j)) %assign 0 &amp; 1
code=[code,&39;1&39;];
elseif tempdisplay==b(j,lengthp(j)-1)
code=[code,&39;0&39;];
else
code=[code,&39;&39;];
end
temp2(e)=tempdisplay;
end
display(code) %display final codeword
e=e+1;
end