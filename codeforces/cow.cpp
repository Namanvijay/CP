//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,d;
    	cin>>n>>d;
    	ll arr[n];
    	for(ll i=0;i<n;i++)
    		cin>>arr[i];
    	//for(ll i=0;i<n;i++)
    		//cout<<"))))"<<arr[i]<<" ";
    	//cout<<endl;
    	ll ans=arr[0];
    	//cout<<"***"<<ans<<endl;
    	for(ll i=1;i<n;i++)
    	{
    		
    		
    			ll z=i*arr[i];
    			if(z<=d)
    			{
    				ans=ans+arr[i];
    				//cout<<"@@@"<<ans<<endl;
    				//cout<<"^^^"<<d<<endl;
    				d=d-z;
    				//arr[i]=0;
    			}
    			else
    			{
    				ll rem=d%i;
    				 ll x=(d-rem)/i;
    				ans=ans+x;
    				//d=d-(i*x);
    				break;

    			
    			}

    		
    	}
    	cout<<ans<<endl;
    }
    return 0;
}