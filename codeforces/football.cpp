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
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,p,w,d;
    cin>>n>>p>>w>>d;
    ll x,y,z;
     y=0;
    ll flg=0;
    while(1)
    {
    	ll rem=p-(d*y);
    	// cout<<rem<<endl;
    	// cout<<p<<endl;
    	if(rem%w==0)
    	{
    		x=rem/w;
    		break;
    	}
    	if(rem<0)
    	{
    		flg=1;
    		break;
    	}
    	if(y>=w)
    	{
    		flg=1;
    		break;
    	}

    	y++;
    }

    if(flg==1)
    {
    	cout<<"-1"<<endl;
    	// cout<<"((("<<endl;
    }
    else
    {
    	if(x+y<=n)
    	{
    		 z=(n-x-y);
    		cout<<x<<" "<<y<<" "<<z<<endl;
    	}

    	else
    		cout<<-1<<endl;
    }

return 0;
}
