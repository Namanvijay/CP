//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
void  factor(ll n)
{
	ll c=0;
	vector <ll> v;
	for(ll i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			v.pb(i);
			c++;
			if(i!=n/i)
			{
					v.pb(n/i);
					c++;
			}
			
		}
			

	}
	//for(ll i=0;i<v.size();i++)
		//cout<<v[i]<<" ";
	if(c<3)
		cout<<"NO"<<endl;

	else 
	{
		ll flg=0;

		sort(v.begin(),v.end());
		if((v[0]*v[1]*v[2])>n)
			cout<<"NO"<<endl;
		else
		{
                for(ll k=1;k<v.size()-1;k++)
                {
                	for(ll j=k+1;j<v.size();j++)
                	{


                          if((v[0]*v[k]*v[j])==n)
                	{
                		cout<<"YES"<<endl;
                		cout<<v[0]<<" "<<v[k]<<" "<<v[j]<<endl;
                		flg=1;
                		break;
                	}

                	}
                	if(flg==1)
                		break;


                	


                	
                }
                if(flg==0)
                	cout<<"NO"<<endl;
		}
		

	}
}
int main()
{
	ll t;
	cin>>t;

	while(t--)
	{
		ll n;
		cin>>n;
		factor(n);

	}
	return 0;
}