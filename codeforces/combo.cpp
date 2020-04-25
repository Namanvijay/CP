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
           
           ll n,m;
           cin>>n>>m;
           string s;
           cin>>s;
           ll arr[m];
           for(ll i=0;i<m;i++)
           	cin>>arr[i];
           for(ll i=0;i<26;i++)
           {
           	   // ll v[n]={0};
           	     vec v(n,0);
           	     
           	    char ch='a'+i;
           	    if(s[0]==ch)
           	    	v[0]=1;
           	   

           	   for(ll j=1;j<n;j++)
           	   {
           	   	if(s[j]==ch)
           	   	{
           	   		v[j]=v[j-1]+1;
           	   	}
           	   	else
           	   		v[j]=v[j-1];
           	   }

           	    // for(ll i=0;i<n;i++)
           	     	// cout<<v[i]<<" ";
           	   ll ans=0;

           	   for(ll k=0;k<m;k++)
           	   {
           	   	  ans=ans+v[arr[k]-1];
           	   }

           	   ans=ans+v[n-1];

           	   cout<<ans<<" ";
           }
           cout<<endl;
           	 


    }
return 0;
}
		
