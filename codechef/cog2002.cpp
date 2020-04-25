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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
          ll n;
          cin>>n;
          ll ans=INT_MIN;
          vec v(n);
          for(ll i=0;i<n;i++)
          	cin>>v[i];
          for(ll i=0;i<n-2;i++)
          {
          	 ll sum=v[i]+v[i+1]+v[i+2];
          	 ans=max(sum,ans);
          }

          ll q=v[0]+v[n-2]+v[n-1];
          ans=max(ans,q);
          ll p=v[0]+v[n-1]+v[1];
          ans=max(ans,p);
          cout<<ans<<endl;
    }
return 0;
}
		
