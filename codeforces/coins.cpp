//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,n;
		cin>>a>>b>>c>>n;
		vector <ll> v;
		v.pb(a);
		v.pb(b);
		v.pb(c);
		ll sum=a+b+c+n;
		if(a==b && b==c && c==a && n==0)
			cout<<"YES"<<endl;
		else 
		{
                  sort(v.begin(),v.end());
                  if((sum%3)!=0)
                  	cout<<"NO"<<endl;
                  else if(sum%3==0 && sum/3<v[2])
                  {
                  	cout<<"NO"<<endl;

                  }
                  else
                  {
                  	cout<<"YES"<<endl;
                  }
		}

	}
	return 0;
}