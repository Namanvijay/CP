//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll m=pow(10,9)+7;

int main()
{
	ll n,ans=0;
	cin>>n;
	vector <ll> v,v1;
	for(ll i=0;i<n;i++)
	{
		ll p;
		cin>>p;
		v.pb(p);
	}

	//for(ll i=0;i<n;i++)
	//	cout<<v[i]<<" ";
	//cout<<"\n";

	for(ll i=0;i<n;i++)
	{
          
		for(ll j=i;j<n;j++)
		{
             // cout<<"####"<<j<<endl;
             // cout<<"****"<<i<<endl;
              ll even=0;
              ll odd=0;
              for(ll k=i;k<=j;k++)
              {
                   // cout<<"@@@@"<<k<<endl;
                   // cout<<"iiii"<<i<<endl;
                    //cout<<"jjjj"<<j<<endl;
                    if(v[k]==1)
                    	even++;
                    else
                    	odd++;
                   // cout<<"%%%%"<<even<<endl;
                   // cout<<"^^^"<<odd<<endl;
              }
              if(i!=0)
              {
              	if(v[0]==1)
              		odd++;
              }
              for(ll k=1;k<=i-1;k++)
              {
              	if(v[k]==1)
              		odd++;
              	//cout<<"&&&"<<endl;
              }
              for(ll k=j+1;k<n;k++)
              {
              	if(v[k]==1)
              		odd++;
              //cout<<"IIII"<<i<<endl;
              //	cout<<"jjjj"<<j<<endl;
              }
            //  cout<<"1-"<<odd<<endl;
            //  cout<<"i-"<<i<<" "<<"j-"<<j<<endl;


              ans=max(ans,odd);
		}
	}
	cout<<ans<<endl;
}