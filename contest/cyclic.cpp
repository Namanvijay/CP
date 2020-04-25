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
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,m;
    	cin>>n>>m;
    	char c;
    	cin>>c;
    	ll ans=0;
    	vector <ll> s;
    	for(ll i=15;i>=0;i--)
    	{
    		ll k=n>>i;
    		if(k&1)
    			s.pb(1);
    		else
    			s.pb(0);

    	}
    	// for(ll i=0;i<s.size();i++)
    	// 	cout<<s[i];
    	// cout<<endl;
    	vector <ll> st(16);
    	if(c=='L')
    	{
    		ll j=0;
    		for(ll i=m;i<s.size();i++)
    		{
    			st[j]=s[i];
    			j++;
    		}
    		// for(ll i=0;i<st.size();i++)
    		// 	cout<<st[i];
    		// cout<<endl;
    		// ll q=st.size();
    		// cout<<q<<endl;
    		ll k=0;
    		// cout<<"***"<<16-m<<endl;
    		for(ll i=16-m;i<16;i++)
    		{
    			st[i]=s[k];
    			k++;
    		}
    		// cout<<k<<endl;

    	// for(ll i=0;i<16;i++)
    	// 	cout<<st[i];
    	// cout<<endl;


    	for(ll i=15;i>=0;i--)
    	{
    		if(st[i]==1)
    			ans=ans+(1<<(15-i));

    	}
    	cout<<ans<<endl;


    	}
    	else
    	{
    		ll j=0;
    		for(ll i=(16-m);i<16;i++)
            {
                st[j]=s[i];
                j++;
            }
            ll q=16-m-1;
            ll r=m;
            for(ll i=0;i<=q;i++)
            {
                st[r]=s[i];
                r++;
            }
         for(ll i=15;i>=0;i--)
         {
            if(st[i]==1)
                ans+=(1<<(15-i));
         }
         cout<<ans<<endl;

    	}




    }
return 0;
}
		
