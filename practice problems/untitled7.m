p=[0.25 0.25 0.14 0.14 0.055 0.055 0.055 0.055];
n=length(p);
codeword=cell(1,n);
X=zeros(n,n);
temp=p;
for i=1:n-1
[~ ,l]=sort(temp);
disp(l)
X(l(1),i)=10;
X(l(2),i)=11;
temp(l(2))=temp(l(2))+temp(l(1));
temp(l(1))=100;
disp(temp)
end
X
i=n-1;
rows=find(X(:,i)==10);
codeword(rows)=strcat(codeword(rows),'1');
rows=find(X(:,i)==11);
codeword(rows)=strcat(codeword(rows),'0');
codeword
for i=n-2:-1:1
row11=find(X(:,i)==11);
    row10=find(X(:,i)==10);
    codeword(row10)=strcat(codeword(row11),'1');
    codeword(row11)=strcat(codeword(row11),'0');
end
disp(codeword)



symb = ['A' 'B' 'C' 'D' 'E' 'F' 'G' 'H']
code = codeword
bitstream = ['1' '0' '0' '1' '0' '0' '1' '1' '1' '0' '0']






n=length(symb);
lengths=[];
for i=1:n
    len=length(char(code(i)));
    lengths=[lengths len];
end
disp(lengths)
maxlen=max(lengths);
disp(maxlen)
msg='';
%bitstream length is denoted by streamlen
streamlen=length(bitstream);
disp(streamlen)
i=1;
while i<=streamlen
    j=0;
    while j<maxlen
        c=bitstream(i:i+j);
        ind=1;
        while (ind<=n && ~isequal(char(code(ind)),c))
            ind=ind+1;
        end
        if ind<=n
            msg=[msg char(symb(ind))];
            break
        else j=j+1;
        end
    end
    i=i+j+1;
end
disp(msg)