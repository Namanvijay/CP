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
          cin>>n;
          vec p(n),a(n);
          multiset <ll> s;
          ll a1,b;
          cin>>a1>>b;
          for(ll i=0;i<n;i++)
          	cin>>p[i];
          for(ll i=0;i<n;i++)
          	cin>>a[i];
          for(ll i=0;i<n;i++)
          {
          	ll l;
          	cin>>l;
             s.insert(l);
          }
          string st;
          cin>>st;
          // sort(s.begin(),s.end());
          vec fp,fa,dp,da;
          for(ll i=0;i<n;i++)
          {
                if(st[i]=='0')
                {
                	
                	ll temp=p[i]+a[i];
                	if(s.find(temp)!=s.end())
                	{

                		fp.pb(p[i]);
                		fa.pb(a[i]);
                		s.erase(s.find(temp));

                	}
                	

                }

                else if(st[i]=='1')
                {

                
                    ll temp=p[i]+a[i];
                    if(s.find(temp)!=s.end())
                    {
                    	dp.pb(p[i]);
                		da.pb(a[i]);
                		s.erase(s.find(temp));
                    }

                	

                }
          }

          ll sumfp=0,sumfa=0,sumdp=0,sumda=0;

          for(ll i=0;i<fp.size();i++)
          {
          	sumfp=sumfp+fp[i];
          	// cout<<fp[i]<<" ";
          }

          // cout<<endl;
          	
             for(ll i=0;i<fa.size();i++)
             {
             	sumfa=sumfa+fa[i];
             	// cout<<fa[i]<<" ";
             }

             // cout<<endl;
          	
             for(ll i=0;i<dp.size();i++)
             {
             	    	sumdp=sumdp+dp[i];
             	    	// cout<<dp[i]<<" ";

             }
             // cout<<endl;
      
             for(ll i=0;i<da.size();i++)
             {
             	sumda=sumda+da[i];
             	// cout<<da[i]<<" ";
             }
             // cout<<endl;
          	

          ll fw=a1*sumfp+b*sumfa;
          ll dw=a1*sumdp+b*sumda;
          // cout<<"!!!!"<<fw<<endl;
          // cout<<"****"<<dw<<endl;
          if(fw>dw)
          {
          	cout<<"Frost"<<endl;
          }
          else
          	cout<<"DustinKiller"<<endl;

    }
return 0;
}
		
