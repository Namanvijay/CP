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
 void fun(ll n)
{
	// ll p=1;

	
	vector < unsigned ll> v(64,0);
	v[0]=1;
	for(ll i=1;i<v.size();i++)
	{
		v[i]=2*v[i-1];
	}
	// cout<<n<<endl;
	// for(ll i=1;i<v.size();i++)
	// cout<<v[i]<<" ";
// cout<<endl;
  auto it=lower_bound(v.begin(),v.end(),n);
  // cout<<*it<<endl;
  

  if(find(v.begin(),v.end(),n)!=v.end())
  {
  	  auto p=it-v.begin();
  	  // cout<<p<<endl;
  	  if((p)%2==0)
  	  	cout<<"Louise"<<endl;
  	  else
  	  	cout<<"Richard"<<endl;

   }
   else
   {
  	   auto p=it-v.begin();
            p--;
            ll temp;
            unsigned ll q=n-v[p];
            for(ll i=0;i<v.size();i++)
            {
            	if(v[i]==q)
            	{
            		temp=i;
            		break;
            	}
            }
  	 
  	   	  if(temp%2==0)
  	   	  	cout<<"Louise"<<endl;
  	   	  else
  	   	  	cout<<"Richard"<<endl;
  	   }
  }


	


int main()
{
    ll t;
    cin>>t;
    ll flg;

    while(t--)
    {
            ll n;
            cin>>n;
             if(n==1)
    	cout<<"Richard"<<endl;
    else
            fun(n);
    }
return 0;
}
		
