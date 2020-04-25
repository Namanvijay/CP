//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

// COMPILE BY:) NAMAN


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
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
#define all(v) v.begin(),v.end()
#define infi LLONG_MAX
#define pi 3.141592653
#define memset(a,b) memset(a,(b),sizeof(a))
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vec v(n+1);
    for(ll i=1;i<=n;i++)
    	cin>>v[i];
    vec mi(m+1);
    for(ll i=1;i<=m;i++)
    	cin>>mi[i];
   
    vector <vector <ll>> freq(n+1,vector <ll>(m+1,0));
    for(ll i=1;i<=n;i++)
    {
    	for(ll j=1;j<=m;j++)
    	{
    		freq[i][j]=freq[i-1][j];
    	}
    	freq[i][v[i]]++;
    }
    // for(ll i=1;i<=n;i++)
    // {
    // 	for(ll j=1;j<=m;j++)
    // 		cout<<freq[i][j]<<" ";
    // 	cout<<endl;
    // }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
    	ll l,r;
    	cin>>l>>r;
    	vec qr(m+1);
    	for(ll i=1;i<=m;i++)
    	{
    		qr[i]=freq[r][i]-freq[l-1][i];
    	}
    	ll flg=0;

    	for(ll i=1;i<=m;i++)
    	{
    		if(qr[i]!=0)
    		{
    			if(qr[i]!=mi[i])
    			{
    				flg=1;
    				break;
    			}
    		}
    	}
    	if(flg==1)
    		cout<<0<<endl;
    	else
    		cout<<1<<endl;
    }
    


return 0;
}
