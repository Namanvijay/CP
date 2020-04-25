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
         ll n,x;
         cin>>n>>x;
         vec v(n);
         for(ll i=0;i<n;i++)
         	cin>>v[i];
         sort(v.begin(),v.end());
         reverse(v.begin(),v.end());
         for(ll i=0;i<n;i++)
         	v[i]=v[i]-x;
         vec pre(n+1,0);
         for(ll i=1;i<=n;i++)
         	pre[i]=pre[i-1]+v[i-1];
        ll ans=0;
         for(ll i=1;i<=n;i++)
         {
         	if(pre[i]<0)
         		break;
         	else
         		ans=i;
         }
         cout<<ans<<endl;
    }
return 0;
}
		
