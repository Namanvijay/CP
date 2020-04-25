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
    ll s;
    cin>>t;
    cin>>s;
    while(t--)
    {
            ll n;
            cin>>n;
            ll flg=0;
            vec v(n);
            vec v1(n);
            for(ll i=0;i<n;i++)
            	cin>>v[i];
            for(ll j=0;j<n;j++)
            	cin>>v1[j];
            sort(v.begin(),v.end());
            sort(v1.begin(),v1.end());
            map <ll,vector <ll>> m;
            mps ma;
            for(ll i=0;i<n;i++)
            {
                  ll q=++ma[v[i]];
                  ll p=++ma[v1[i]];
                  m[i].pb(v[i]);
                  m[i].pb(q);
                  m[i].pb(v1[i]);
                  m[i].pb(p);
            }

             // for(auto it=m.begin();it!=m.end();it++)
             // {
// 
             	// cout<<it->first<<"->";
             // for(ll i=0;i<it->second.size();i++)
             	// cout<<it->second[i]<<" ";
             // cout<<endl;

             // }

             for(ll i=0;i<n;i++)
             {
                  if(i==0)
                  {
                  	if(v1[i]>v[i])
                  		continue;
                  	else
                  	{
                  		flg=1;
                  		break;
                  	}
                  }
                  else
                  {
                  	if((v1[i]>v[i])&&((m[i][1]-1)>0))
                  	
                  		continue;
                  		else
                  		{
                  			flg=1;
                  			break;
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
		
