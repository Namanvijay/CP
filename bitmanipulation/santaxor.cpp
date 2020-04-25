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
           vec v(n),vi;
           for(ll i=0;i<n;i++)
           	cin>>v[i];
           if(n%2==0)
           	cout<<0<<endl;
           else
           {
           	ll ans=0;
           	  for(ll i=0;i<n;i+=2)
           	  {
           	  	   vi.pb(v[i]);
           	  }
           	  	// ans=ans^(v[i]^v[i+2]);
           	  for(ll i=0;i<vi.size();i++)
           	  {
           	  	  ans=ans^vi[i];
           	  }

           	  cout<<ans<<endl;

           }
    }
return 0;
}
		
