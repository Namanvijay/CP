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
        vec dp(n,1);
        vec sum(n);

        sum[0]=v[0];
        for(ll i=1;i<n;i++)
        	sum[i]=v[i];
        for(ll i=1;i<n;i++)
        {
        	for(ll j=0;j<i;j++)
        	{
        		if(v[j]<v[i] && sum[i]<sum[j]+v[i])
        		{
        			// cout<<"$$$"<<v[i]<<" "<<v[j]<<endl;
        			sum[i]=sum[j]+v[i];
        			// dp[i]=dp[j]+1;
        		}
        	}
        }
        // for(ll i=0;i<n;i++)
        // 	cout<<dp[i]<<" ";
        // cout<<endl;
        // for(ll i=0;i<n;i++)
        // 	cout<<sum[i]<<" ";
        //  cout<<endl;
        ll ma=0;
        for(ll i=0;i<n;i++)
        {
        	ma=max(ma,sum[i]);
        }

        cout<<ma<<endl;

    }
return 0;
}
		
