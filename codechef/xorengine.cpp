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
ll fun(ll n)
{
	ll r=0;
	while(n!=0)
	{
		n=n&(n-1);
		r=r^1;

	}
	return r;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
           
           ll n,q;
           cin>>n>>q;
           ll ev=0,od=0;
           ll v[n];
           for(ll i=0;i<n;i++)
           	cin>>v[i];
           for(ll i=0;i<n;i++)
           {
           	   ll z=fun(v[i]);
           	   if(z==1)
           	   	od++;
           	   else
           	   	ev++;
           }

           // cout<<ev<<" "<<od<<endl;

           while(q--)
           {
           	  ll p;
           	  cin>>p;
           	  ll q=fun(p);
           	  ll even,odd;
           	  if(q==1)
           	  {
           	  	even=od;
           	  	odd=ev;
           	  }
           	  else
           	  {
           	  	even=ev;
           	  	odd=od;
           	  }

           	  cout<<even<<" "<<odd<<endl;
           }
    }
return 0;
}
		
