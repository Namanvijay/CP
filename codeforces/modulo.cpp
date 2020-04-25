//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

ll p=10000000;
int main()
{
	ll n,m;
	cin>>n>>m;
	//map <ll> m1,m2;
	vector <ll> v,v1,v2,v3;
	for(ll i=0;i<n;i++)
	{
		ll k;
		cin>>k;
		v.pb(k);
	//	m1[k]++;
	}


	for(ll i=0;i<n;i++)
	{
		ll k;
		cin>>k;
		v1.pb(k);
		//m2[k]++;
	}
	    
	
	sort(v.begin(),v.end());
	sort(v1.begin(),v1.end());
	if(v1==v)
		cout<<"0"<<endl;
	else
	{
		for(ll i=0;i<n;i++)
		{
			ll k=v1[0]-v[i];
			//k=k%m;
			if(k<0)
				k=k+m;
			v2.pb(k);
		}

   	
    sort(v2.begin(),v2.end());
  //  for(ll i=0;i<n;i++)
  //  cout<<v2[i]<<" ";	

	for(ll i=0;i<v2.size();i++)
		{
			ll temp=-1;
			//cout<<"####"<<endl;
			if(temp!=v2[i])
			{
				//cout<<"^^^^"<<endl;
				v3=v;

				for(ll j=0;j<n;j++)
				{
                    v3[j]=v3[j]+v2[i];
                    v3[j]=v3[j]%m;
                   //  cout<<"***"<<endl;

				}

				sort(v3.begin(),v3.end());
				//cout<<"****"<<v2[i]<<endl;

			if(v3==v1)
			{
				cout<<v2[i]<<endl;
				break;
			}
				
				else
				temp=v2[i];
			}
		}
	}



	return 0;


}