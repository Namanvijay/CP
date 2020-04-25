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
           
           ll n,k;
           cin>>n>>k;
           ll flg=0;
           vec v(n);
           for(ll i=0;i<n;i++)
           	cin>>v[i];
           mps m;
           for(ll i=0;i<n;i++)
           {
           	  if(v[i]==0)
           	  	continue;
           	  else
           	  {
           	  	ll c=0;
           	  	while(v[i]!=0)
           	  	{
           	  		if(v[i]%k==0)
           	  		{

           	  			v[i]=v[i]/k;
           	  			c++;
           	  		}
           	  		else if(v[i]%k!=1)
           	  		{
           	  			flg=1;
           	  			break;
           	  		}

           	  		else
           	  		{
           	  			v[i]=v[i]-1;
           	  			// cout<<"^^^"<<c<<endl;

           	  			if(m.count(c))
           	  			{
           	  				flg=1;
           	  				break;

           	  			}
           	  			else
           	  				m[c]++;
           	  		}

           	  	}
           	  }
           }

           if(flg==0)
           	cout<<"YES"<<endl;
           else
           	cout<<"NO"<<endl;
    }
return 0;
}
		
