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
#define inf INT_MAX
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
#define ninf INT_MIN
#define ninfi LLONG_MIN
#define memset(a,b) memset(a,(b),sizeof(a))
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0,b=0;
    for(ll i=0;i<n;i++)
    {
    	if(s[i]=='(')
    		a++;
    	else
    		b++;
    }
    if(a!=b)
    	cout<<-1<<endl;
    else
    {
    	vec v(n);
    	ll p=0;
    	ll flg=1;
    	ll ans=0;
    	ll j=0;
    	for(ll i=0;i<n;i++)
    	{
    		if(s[i]=='(')
    		{
    			p++;
    			// flg=1;
    		}
    		else
    		{
    			p--;
    			
    		}
    		if(p<0)
    			flg=0;
    		if(p==0)
    		{
    			if(flg==0)
    				ans+=(i-j+1);
    			j=i+1;
    			flg=1;

    		}

    	}

    	cout<<ans<<endl;

    }




return 0;
}
