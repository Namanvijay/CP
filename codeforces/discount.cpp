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
    ll n;
    cin>>n;
    vec v(n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>v[i];
    	sum=sum+v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
    	ll a;
    	cin>>a;
    	 ll ans=sum-v[a-1];
    	 cout<<ans<<endl;

    }
   

return 0;
}
