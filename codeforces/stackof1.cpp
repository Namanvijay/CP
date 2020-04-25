#include <bits/stdc++.h>
using namespace std;
#define mk make_pair
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin>>b[i];
        for(int i=0;i<m;i++)
        mp.insert(mk(b[i],-1));
        for(int i=0;i<n;i++)
        {
            auto it=mp.find(a[i]);
            if(it==mp.end())
            {continue;}
            else
            {
                it->second=i;//cout<<"asd";
            }
        }
        ll ans=0;int t=-1;
        for(int i=0;i<m;i++)
        {   int y=mp[b[i]];
            if(y>t)
            {ans=ans+2*(y-i)+1;t=y;}
            else
            ans++;
            //cout<<ans<<" "<<i<<<endl;
        }
        cout<<ans<<endl;
    }
       
    return 0;
}