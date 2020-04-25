

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
#define endl "\n"
#define inf INT_MAX
#define vec vector <ll>
#define mps map <ll,ll> 
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
#define all(v) v.begin(),v.end()

 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	ll n,a,b,c,d;
    	cin>>n>>a>>b>>c>>d;
    	ll p=(a-b);
    	ll q=(a+b);
    	p=n*(a-b);
    	q=n*(a+b);
    	ll r=(c-d);
    	ll s=(c+d);
        ll flg=0;
        if(p>s)
        {
            flg=1;
        }
        else if(q<r)
            flg=1;
        if(flg==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    	
    }
return 0;
}
		
