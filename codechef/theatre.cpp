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
    ll e=0;
    while(t--)
    {
          ll n;
          cin>>n;
          // ll e=0;
          ll arr[4][4]={0},f;
          ll z=INT_MIN;
          for(ll i=0;i<n;i++)
          {
          	char s;
          	cin>>s;
          	ll f;

          	cin>>f;
          	if(f==12)
          	arr[s-65][0]++;
            else if(f==3)
            	arr[s-65][1]++;
            else if(f==6)
            	arr[s-65][2]++;
            else if(f==9)
            	arr[s-65][3]++;
          }
          // for(ll i=0;i<4;i++)
          // {
          	// for(ll j=0;j<4;j++)
          		// cout<<"!!!"<<arr[i][j]<<" ";
          	// cout<<endl;
          // }
          for(ll i=0;i<4;i++)
          {
          	// cout<<"^^^"<<i<<endl;
          	vec v;
          	 for(ll j=0;j<4;j++)
          	 {
          	 	// cout<<"***"<<j<<endl;
          	 	if(j==i)
          	 		continue;
          	 	else
          	 	{

          	 		for(ll k=0;k<4;k++)
          	 		{
          	 			// cout<<"((("<<k<<endl;
          	 			if(k==i || k==j)
          	 				continue;
          	 			else
          	 			{
          	 				for(ll p=0;p<4;p++)
          	 				{
          	 					// cout<<"))))"<<p<<endl;
          	 					if(p==i || p==j|| p==k)
          	 						continue;
          	 					else
          	 					{
          	 						v.pb(arr[0][i]);
          	 						v.pb(arr[1][j]);
          	 						v.pb(arr[2][k]);
          	 						v.pb(arr[3][p]);
          	 						// for(ll i=0;i<v.size();i++)
          	 							// cout<<"###"<<v[i]<<" ";
          	 						// cout<<endl;
          	 						sort(v.begin(),v.end());
          	 						ll ans=0;
          	 						ans=100*v[3]+75*v[2]+50*v[1]+25*v[0];
          	 						for(ll i=0;i<v.size();i++)
          	 						{
                                            if(v[i]==0)
                                            	ans=ans-100;
          	 						}
          	 						z=max(z,ans);
          	 						// e=e+z;
          	 						v.clear();
          	 					}


          	 				}

          	 			}
          	 		}
          	 	}
          	 }
          }
          e=e+z;
          cout<<z<<endl;
    }
    cout<<e<<endl;
return 0;
}
		

