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
    ll u,v;
    cin>>u>>v;
    vec vi;

    if(u==0 && v==0)
    {
    	// cout<<1<<endl;
    	cout<<0<<endl;
    }
    else if(v==u)
    {
    	cout<<1<<endl;
        cout<<v<<endl;
 

    }
    	
    else if(u>v)
    	cout<<"-1"<<endl;
    else if((v-u)%2!=0)
    	cout<<"-1"<<endl;
    else 
    {
    	   ll ans=(v-u)/2;
    	   // cout<<"%%%"<<ans<<endl;
    	   
    	   // 
    	  vi.pb(ans);
    	  ll t=ans^u;
    	  if(t==u+ans)
    	  {
    	  	 cout<<2<<endl;
    	  	 cout<<ans<<" "<<t<<endl;

    	  }

    	  else
    	  {
    	  	cout<<3<<endl;
    	  	cout<<ans<<" "<<ans<<" "<<u<<endl;
    	  }
    	  // cout<<"(((("<<u+ans
    	  // cout<<")))"<<t<<endl;
    	  // if(t==0)
    	  // {
    	  	  // ll r=v-ans;
    	  	  // ll q=r/ans;
    	  	  // for(ll i=0;i<q;i++)
    	  	  	// vi.pb(a/ns);
    	  	    // cout<<vi.size()<<endl;
    	  // for(ll i=0;i<vi.size();i++)
    	  	// cout<<vi[i]<<" ";
    	  // cout<<endl;
    	  // }

    	  // else
    	  // {
    	  // 	  vi.pb(t);
    	  // 	  cout<<2<<endl;
    	  // 	  for(ll i=0;i<vi.size();i++)
    	  // 	  	cout<<vi[i]<<" ";
    	  // 	  	cout<<endl; 
    	  // }

    	

    }

return 0;
}
