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
           string s;
           ll ans=1;
           cin>>s;
           ll n=s.length();
           ll c=1;
           if(find(s.begin(),s.end(),'L')==s.end())
           {
           	  cout<<1<<endl;
           }
           else
           {

                      for(ll i=0;i<n-1;i++)
           {

           	  if(s[i]=='L' && s[i+1]=='L')
           	  {
           	  		c++;
           	  		// cout<<"^^"<<c<<endl;
           	  		ans=max(ans,c);
           	  }
           	  

           	  else
           	  {
           	  	
           	  	ans=max(ans,c);
           	  	// cout<<"((("<<ans<<endl;
           	  	c=1;
           	  }
           	  	
           }

           cout<<ans+1<<endl;

           }
          
    }
          


           
          
return 0;
}
		
