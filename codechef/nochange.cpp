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
    ll t;
    cin>>t;
    while(t--)
    { 
    	ll n,p;
    	cin>>n>>p;
    	ll arr[n],flg=0;
    	for(ll i=0;i<n;i++)
    		cin>>arr[i];
    	vec v(n,0);
    	for(ll i=n-1;i>0;i--)
    	{
    		if(p%arr[i]!=0)
    		{
    			cout<<"YES"<<" ";
    			v[i]=(p/arr[i])+1;
    			flg=1;
    			break;
    		}
    	}
    	if(flg==0)
    	{
              
                for(ll i=n-1;i>0;i--)
                {

                	if(arr[i]%arr[i-1]!=0)
    			{
    				cout<<"YES"<<" ";
    				v[i]=0;
    				while(1)
    				{
    					
    					p=p-v[i]*arr[i];
    					if(p%arr[i-1]==0)
    						v[i]++;
    					else
    					{
    						flg=2;
    						v[i-1]=p/arr[i-1]+1;
    						break;
    					}
    				}
    				if(flg==2)
    					break;

    				
    			}
                }
    			
    	}	
    		
    		
    		
    	
    	if(flg==0)
    		cout<<"NO"<<endl;
    	else if(flg==1)
    	{
    		for(ll i=0;i<v.size();i++)
    			cout<<v[i]<<" ";
    		cout<<endl;
    	}
    	else if(flg==2)
    	{
    		for(ll i=0;i<v.size();i++)
    			cout<<v[i]<<" ";
    		cout<<endl;
    	}
    }



    
return 0;
}
		
