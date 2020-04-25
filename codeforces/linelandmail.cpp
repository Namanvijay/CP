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
    vec v(n+1);
    for(ll i=1;i<=n;i++)
    	cin>>v[i];
    ll mi[n+1],ma[n+1];
    mi[1]=abs(v[2]-v[1]);
    ma[1]=abs(v[n]-v[1]);
    mi[n]=abs(v[n]-v[n-1]);
    ma[n]=abs(v[n]-v[1]);
    for(ll i=2;i<n;i++)
    {
    	ll a=abs(v[i]-v[i-1]);
    	ll b=abs(v[i]-v[i+1]);
    	ll c=abs(v[i]-v[1]);
    	ll d=abs(v[i]-v[n]);
    	mi[i]=min(a,b);
    	ma[i]=max(c,d);
    }

    for(ll i=1;i<=n;i++)
    	cout<<mi[i]<<" "<<ma[i]<<endl;

return 0;
}
