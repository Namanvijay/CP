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
    ll n;
    cin>>n;
    vec v;
    ll flg=0;
    ll y=0;
    float x;
    if(n%28==0)
    {
    	ll r=n/7;
    	for(ll i=0;i<r;i++)
    		v.pb(7);
    	for(ll i=0;i<v.size();i++)
    		cout<<v[i];
    	cout<<endl;
    }
    // else if(n%4==0 && n>28)
    // {

    // 	n=n-28;
    // 	ll q=n/4;
    // 	for(ll i=0;i<q;i++)
    // 		v.pb(4);
    // 	for(ll i=0;i<4;i++)
    // 		v.pb(7);
    // 	for(ll i=0;i<v.size();i++)
    // 		cout<<v[i];
    // 	cout<<endl;
    // }

    else
    {

    		 while(n>=4*y)
    {
          x=float(n-4*y)/7;
          // cout<<x<<endl;
          if(float(x)==int(x))
          {
          	flg=1;
          	break;
          }
          y++;

          	
    }

    if(flg==0)
    	cout<<"-1"<<endl;
    else
    {
    	for(ll i=0;i<y;i++)
    		v.pb(4);
    	for(ll i=0;i<x;i++)
    		v.pb(7);

    	for(ll i=0;i<v.size();i++)
    		cout<<v[i];
    	cout<<endl;

    }


    }
    

    

    
   
return 0;
}
