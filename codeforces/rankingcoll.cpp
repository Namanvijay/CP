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
       vec v(n);
       set <ll> s;
       for(ll i=0;i<n;i++)
       {

       	 cin>>v[i];
       	 s.insert(v[i]);

       }

       v.clear();
       // for(auto it=s.begin();it!=s.end();it++)
       	
       // {
       // 	  v.pb(*it);
       // }
       ll c=1;

       while(1)
       {

       	  if(s.find(c)==s.end())
       	  {
       	  	// c++;
       	  	k--;
       	  	if(k<=0)
       	  	{
       	  		while(s.find(c+1)!=s.end())
       	  		{
       	  			c++;
       	  		}
       	  		break;
       	  	}
       	  	else
       	  		c++;

       	  }

       	  else
       	  	c++;
       	  	


       }

       cout<<c<<endl;
     }
     }  
