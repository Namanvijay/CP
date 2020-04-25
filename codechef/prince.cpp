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

    	ll n,k;
    	cin>>n>>k;
    	vector <char> v;
    	for(ll i=0;i<n;i++)
    	{
    		char c;
    		cin>>c;
    		v.pb(c); 
    	}
    //	for(ll i=0;i<n;i++)
    	//cout<<v[i]<<" ";   	
    	ll j=1;
    	while(j<=k)
    	{
    		if(v[n-j]=='T')
    			j++;
    		else if(v[n-j]=='H')
    		{
                  for(ll i=0;i<n-j;i++)
                  {
                  	// cout<<"@@@"<<v[i]<<" ";
                  	 if(v[i]=='H')
                  	 	v[i]='T';
                  	 else if(v[i]=='T')
                  	 	v[i]='H';
                  }
                  // cout<<"***"<<j<<endl;
                  // for(ll i=0;i<n-j;i++)
                  	// cout<<"^^^"<<v[i]<<endl;
                 
                 j++;
    	    }
    	}
    	ll c=0;
    	// for(ll i=0;i<=n-k-1;i++)
    		// cout<<v[i]<<" ";

    	for(ll i=0;i<=n-k-1;i++)
    	{
    		if(v[i]=='H')
    			c++;
    	}
    	cout<<c<<endl;



    }
return 0;
}
		
