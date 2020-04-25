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
        ll arr[n+1];
        for(ll i=1;i<=n;i++)
        	cin>>arr[i];
         // ll arr1[n];
        // for(ll i=0;i<n;i++)
        	// arr1[i]=arr[i];
        ll c[n+1]={0};
        c[0]=0;
        ll ans=0,e=0;

        for(ll i=1;i<=n;i++)
        {
        	if(arr[i]>=0)
        	{
        		if(arr[i]%4==0)
        	{
        		c[i]=i;
        		e=i;
        	}

        	else if(arr[i]%2==1)
        		c[i]=c[i-1]+1;
        	else
        	{
        		c[i]=e;
        		e=i;
        	}

        	}

        	else
        	{

        		 if(arr[i]%(-4)==0)
        	{
        		c[i]=i;
        		e=i;
        	}

        	
        	else if(arr[i]%(-2)==-1)
        		c[i]=c[i-1]+1;

        	else
        	{
        		c[i]=e;
        		e=i;
        	}

        	}
        	
        	
        	
        }

        for(ll i=1;i<=n;i++)
        	ans=ans+c[i];

        cout<<ans<<endl;
       
        // ll a=countSubarrays(arr, n, 4);
       

        // ll b=countSubarrays(arr1, n, 2);
       

        // cout<<(a+(n*(n+1)/2)-b)<<endl;



       
    }
return 0;
}
		
