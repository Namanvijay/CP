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
    	ll x,n,m;
    	cin>>x>>n>>m;
    	if(x<=m*10)
    		cout<<"YES"<<endl;
    	else
    	{
    		while(n)
    	{
    		x=x/2;
    		x+=10;
    		n--;
    	}

    	ll rem=x-m*10;
    	if(rem<=0)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;

    	}
    	








    }
return 0;
}
		
