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
          ll n,m;
          cin>>n>>m;
          ll i=0;
          vec v;
          ll temp=m;
          // for(ll i=0;i<=31;i++)
          while( m>0)
          {
          	  if(m&1<<i)

          	  {
          	  	 v.pb(i);
          	  	
          	  }
          	   m=m>>1;

          	  i++;
          }

          for(ll i=v.size()-1;i>=1;i--)
          {
          	 cout<<"("<<n<<"<<"<<v[i]<<")"<<" +"<<" ";
          }

          cout<<"("<<n<<"<<"<<v[0]<<")";

          cout<<endl;

          
    }
return 0;
}
		
