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
    vec v(n);
    vec c(32,0);
    for(ll i=0;i<n;i++)
    {
    	cin>>v[i];
    	for(ll j=0;j<32;j++)
    	{
    		if(v[i] & 1<<j)
    			c[j]++;
    	}
    }	

    	// for(ll j=31;j>=0;j--)
    	// 	cout<<c[j]<<" ";
    	// cout<<endl;

    	for(ll j=31;j>=0;j--)
    	{
    		if(c[j]==1)
    		{
    			for(ll i=0;i<n;i++)
    			{
    				if(v[i] & 1<<j)
    				{
    					if(v[i]!=-1)
    					{
    						cout<<v[i]<<" ";
    					    v[i]=-1;

    					}
    					
    				}
    			}

    		}
    			
    	}
    	for(ll i=0;i<n;i++)
    	{
    		if(v[i]!=-1)
    			cout<<v[i]<<" ";

    	}

    	cout<<endl;
    

return 0;
}
