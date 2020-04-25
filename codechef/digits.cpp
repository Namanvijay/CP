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
          ll a,b;
          cin>>a>>b;
          ll t1=a,t2=b;
          ll x,y,z,w;
          vec v;
          if(a>=10 && b>=10)
          {
          	ll ans=a+b;

          	 ll x=t1%10;
          	 t1=t1/10;
          	 ll y=t1%10;
          	 ll z=t2%10;
          	 t2=t2/10;
          	 ll w=t2%10;
          	 ll i=0;
          	 ll n1=y*10+w;
          	 ll n2=x*10+z;
          	 ll sum;
          	 sum=n1+n2;
          	 ans=max(ans,sum);
          	 // v.pb(sum);
          	   n1=y*10+z;
          	  n2=w*10+x;
          	  
          	 sum=n1+n2;
          	 // v.pb(sum);
          	 ans=max(ans,sum);
          	  n1=z*10+x;
          	  n2=w*10+y;
          	  
          	 sum=n1+n2;
          	 // v.pb(sum)
          	 ans=max(ans,sum);

          	 cout<<ans<<endl;

          	 




          }

          else if(a<10 && b>=10)
          {
          	t1=a,t2=b;
          	ll ans=a+b;
          	ll z=t2%10;
          	t2=t2/10;
          	ll w=t2%10;
          	ll y=a;
          	ll n1=w*10+y;
          	ll n2=z;
          	ll sum;
          	sum=n1+n2;
          	ans=max(ans,sum);
          	n1=y*10+z;
          	n2=w;
          
          	
          	sum=n1+n2;
          	ans=max(ans,sum);
          	cout<<ans<<endl;

          }

          else if(a>=10 && b<10)
          {

          	t1=a,t2=b;
          	ll ans=a+b;
          	ll y=t1%10;
          	t1=t1/10;
          	ll x=t1%10;
          	ll w=b;
          	ll n1=x*10+w;
          	ll n2=y;
          	ll sum;
          	sum=n1+n2;
          	
          	ans=max(ans,sum);
          	n1=w*10+y;
          	n2=x;
          	sum=n1+n2;
          	ans=max(ans,sum);
          	cout<<ans<<endl;
          

          }

          else
          {
          	  ll ans=a+b;
          	  cout<<ans<<endl;
          }
         
    }
return 0;
}
		
