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
#define memset(a,b) memset(a,(b),sizeof(a))
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	vec v(n+2);
        v[n+1]=0;
    	for(ll i=1;i<=n;i++)
    		cin>>v[i];
        ll a=0;
        ll b=-1000000000;
        vec ans;
        for(ll i=1;i<=n;i++)
        {
            if(v[i]>0)
            {
                a=max(a,v[i]);
                if(v[i+1]<0)
                {
                    ans.pb(a);
                    a=0;
                }
                else if(v[i+1]==0)
                    ans.pb(a);

            }
            else
            {
                b=max(b,v[i]);
                if(v[i+1]>0)
                {
                    ans.pb(b);
                    b=INT_MIN;
                }
                else if(v[i+1]==0)
                {
                    ans.pb(b);
                }
            }

        }

       


        
        ll sum=0;
        // for(ll i=0;i<ans.size();i++)
        //     cout<<ans[i]<<" ";
        // cout<<endl;

        for(ll i=0;i<ans.size();i++)
            sum=sum+ans[i];
        cout<<sum<<endl;
    	
    	


    }
return 0;
}
		
