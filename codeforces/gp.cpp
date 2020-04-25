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
    ll n,k;
    cin>>n>>k;
    vec v(n);
    map <ll,vector<ll>> m;
     set <ll> s;
      mps m1,m2;
   for(ll i=0;i<n;i++)
   {
   	cin>>v[i];
   	m2[v[i]]++;

   }

   m2[v[0]]--;
   ll ans=0;
   for(ll i=1;i<n-1;i++)
   {
   	  m1[v[i-1]]++;
   	  m2[v[i]]--;
   	  if(v[i]%k==0)
   	  	ans=ans+(m1[v[i]/k]*m2[v[i]*k]);
   }

   cout<<ans<<endl;
   
 

   


return 0;
}
