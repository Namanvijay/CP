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
    ll n,q;
    cin>>n>>q;
    ll arr1[n+1][32]={0},arr2[n+1][32]={0};
    for(ll i=1;i<=n;i++)
    {
    	ll k;
    	cin>>k;
    	for(ll j=31;j>=0;j--)
    	{
    		if(i==0)
    		{
    			// cout<<"^^^"<<(k&1<<j)<<endl;
    			if((k&1<<j))
    			{
    				arr2[i][j]=1;
    				// cout<<"^^^"<<j<<endl;
    			}
    			else
    				arr1[i][j]=1;
    		}

    		else
    		{
    			if(k&(1<<j))
    			{
    				arr2[i][j]=arr2[i-1][j]+1;
    				arr1[i][j]=arr1[i-1][j];
    			}
    			else
    			{
    				arr1[i][j]=arr1[i-1][j]+1;
    				arr2[i][j]=arr2[i-1][j];
    			}
    		}

    	}

    }

    // for(ll i=1;i<=n;i++)
    // {
    // 	for(ll j=31;j>=0;j--)
    // 		cout<<arr2[i][j]<<" ";

    // 	cout<<endl;
    // }

    // cout<<endl;

    // for(ll i=1;i<=n;i++)
    // {
    // 	for(ll j=31;j>=0;j--)
    // 		cout<<arr1[i][j]<<" ";

    // 	cout<<endl;
    // }

    while(q--)
    {
    	ll l,r,x;
    	cin>>l>>r>>x;
    	ll ans=0;

    	for(ll j=31;j>=0;j--)
    	{
    		if((x&1<<j))
    		{
    			ans=ans+(1<<j)*(arr1[r][j]-arr1[l-1][j]);


    		}

    		else
    		{
    			ans=ans+(1<<j)*(arr2[r][j]-arr2[l-1][j]);
    		}
    	}

    	cout<<ans<<endl;

    }


return 0;
}
