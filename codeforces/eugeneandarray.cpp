//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
/********** code by naman *******/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
#define endl "\n"
#define im INT_MAX
#define vec vector <ll>
#define mps map <ll,ll>  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    map <ll,ll> m;
    vec v(n+1);
    vec vi;
    for(ll i=1;i<=n;i++)
    	cin>>v[i];
    ll pre[n+1]={0};
        ll ans=0;
        ll w=1;
    for(ll i=1;i<=n;i++)
    
    	pre[i]=pre[i-1]+v[i];
    // for(ll i=1;i<=n;i++)
    // 	cout<<pre[i]<<" ";
    // cout<<endl;

    ll j=0;
    m[0]=0;
    for(ll i=1;i<=n;i++)
    {
    	if(m.find(pre[i])!=m.end())
    	{
    		j=max(m[pre[i]]+1,j);



    	}

    	ans=ans+(i-j);
    	m[pre[i]]=i;
    }

    cout<<ans<<endl;
    




return 0;
}
