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
bool fun(pair<ll,ll>&a,pair<ll,ll>&b)
{
	return a.first>b.first;
}
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    vector <pair<ll,ll>> vi;
    for(ll i=0;i<n;i++)
    {
    	vi.pb(mp(v[i],i+1));
    }

    vec vic(k);
    ll sum=0,ans=1;
    sort(vi.begin(),vi.end(),fun);
    for(ll i=0;i<k;i++)
    {
    	vic[i]=vi[i].second;
    	sum=sum+vi[i].first;
    }
    sort(vic.begin(),vic.end());
    for(ll i=0;i<k-1;i++)
    {
    	ans=ans*(vic[i+1]-vic[i])%998244353;
    }

    // ans=ans%998244353;

    cout<<sum<<" ";

    cout<<ans<<endl;



return 0;
}
