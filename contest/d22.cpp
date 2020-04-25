//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

// COMPILE BY:) NAMAN


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
#define infi LLONG_MAX
#define pi 3.141592653
#define ninf INT_MIN
#define ninfi LLONG_MIN
#define memset(a,b) memset(a,(b),sizeof(a))
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    ll n,m;
    cin>>n>>m;
   vec a(n),b(n),c(n),r(n);
   for(ll i=0;i<n;i++)
    cin>>a[i];
for(ll i=0;i<n;i++)
    cin>>b[i];
for(ll i=0;i<n;i++)
    cin>>c[i];
for(ll i=0;i<n;i++)
{
    ll w=m/a[i];
    ll q=min(w,c[i]);
    r[i]=q*b[i];
}
sort(all(r));
cout<<r[n-1]<<endl;
}




