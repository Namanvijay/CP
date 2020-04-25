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
       ll flg=0;
       cin>>n;
       vec v(n);
       mps m;
       for(ll i=0;i<n;i++)
       {
       		cin>>v[i];
       		m[v[i]]++;
       }

       for(ll i=0;i<n;i++)
       {
       	  if(m[v[i]]>=3)
       	  {
       	  	flg=1;
       	  	break;
       	  }

       }
// /     for(auto it=m.begin();it!=m.end();it++)
       	// cout<<it->first<<" "<<it->second<<endl;
       if(flg==0)
       { 
       	   map <ll,vector <ll>> ma; 
       	  for(ll i=0;i<n;i++)
       	  {
       	  	  if(m[v[i]]==2)
       	  	  	ma[v[i]].pb(i);

       	  }

       	  for(ll i=0;i<n;i++)
       	  {

       	  	 if(m[v[i]]==2)
       	  	 {
       	  	 	for(auto it=ma.begin();it!=ma.end();it++)
       	  	 	{
       	  	 		for(ll i=0;i<it->second.size()-1;i++)
       	  	 		{
       	  	 			if((it->second[i+1]-it->second[i])>1)
       	  	 				flg=1;
       	  	 			    break;
       	  	 		}
       	  	 	}
       	  	 }
       	  }
       	  
       }

       if(flg==1)
       	cout<<"YES"<<endl;
       else
       	cout<<"NO"<<endl;
       

    }
return 0;
}
		
