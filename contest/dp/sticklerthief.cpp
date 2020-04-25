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
       vec v(n);
       for(ll i=0;i<n;i++)
       	cin>>v[i];
       vec dp(n);
       if(n==1)
       	cout<<v[0]<<endl;
       else if(n==2)
       	cout<<max(v[0],v[1])<<endl;
       else
       {
       	 dp[0]=v[0];
       dp[1]=max(dp[0],dp[1]);
       for(ll i=2;i<n;i++)
       	dp[i]=max(dp[i-2]+v[i],dp[i-1]);
       cout<<dp[n-1]<<endl;


       }




    }
return 0;
}
		
