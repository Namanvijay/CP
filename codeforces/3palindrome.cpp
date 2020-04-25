//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

/************** Code by naman ******/

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

vector <ll> m[201];
ll freq[201000][201];
 
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
    	// vec v(n);
    
    	// mvec m;
    	for(ll i=1;i<=200;i++)
    		m[i].clear();
    	// for(ll i=0;i<n;i++)
    		// cin>>v[i];
    	for(ll i=0;i<n;i++)
    	{
    		ll b;
    		cin>>b;
    		m[b].pb(i);
    		if(i==0)
    			freq[0][b]=1;
    		else
    		{
    			for(ll j=1;j<=200;j++)
    				freq[i][j]=freq[i-1][j];

    			freq[i][b]++;
    		}


    	}

    	// for(ll i=0;i<n;i++)
    	// {
    	// 	for(ll j=1;j<=26;j++)
    	// 		cout<<freq[i][j]<<" ";
    	// 	cout<<endl;
    	// }

    	// for(ll i=0;i<n;i++)
    		// m[v[i]].pb(i);

    	// for(auto it=m.begin();it!=m.end();it++)
    	// {
    	// 	cout<<it->first<<" ";
    	// 	for(ll i=0;i<it->second.size();i++)
    	// 		cout<<it->second[i]<<" ";
    	// 	cout<<endl;
    	// }


    	ll ans=0;
    	for(ll i=1;i<=200;i++)
    	{
    		// cout<<"((("<<v[i]<<endl;
    		ll q=m[i].size();
    		// cout<<"***"<<q<<endl;
    		ans=max(ans,q);
    		// if(q%2==0 && q!=0)
    		// {
    			for(ll j=0;j<q/2;j++)
    			{
    				ll in1=m[i][j];
    				ll in2=m[i][q-j-1];
    				ll c=0;
    				for(ll k=1;k<=200;k++)
    				{
    					if(i!=k)
    					{
    						ll p=freq[in2][k]-freq[in1][k];
    						c=max(c,p);


    					}
    				}

    				ans=max(ans,2*(j+1)+c);

    			}

    		// }
    	}

    	cout<<ans<<endl;




    }
return 0;
}
		
