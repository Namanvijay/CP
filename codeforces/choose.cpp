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
    ll ans=INT_MIN;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++)
    {
    	ll r=v[i]*(n-i);
    	ans=max(ans,r);
    }

    cout<<ans<<endl;

return 0;
}
