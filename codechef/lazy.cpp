

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='0')
        cout<<"YES"<<endl;
        else
        {
            int n=s.size();
            int count[n+1];
            count[0]=1;
            count[1]=1;
            for(int i=2;i<=n;i++)
            {
                count[i]=0;
                if(s[i-1]>'0')
                count[i]=count[i-1];
                if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<'7'))
                count[i]+=count[i-2];
            }
            cout<<"***"<<count[n]<<endl;
           if(count[n]%2==0)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
        }
    }
    return 0;
}