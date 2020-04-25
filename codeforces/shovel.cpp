//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n,k;
	cin>>n>>k;
	ll x=1,z,ans=INT_MAX,flg=0;
	float y;
	if(n==10)
		cout<<1<<endl;
	else
	{ll j=1;

		while(j<10)
		{
			float c=float(n*j)/10;
			//cout<<"!!!!"<<c<<endl;
			if(int(c)==float(c))
			{
				//cout<<"@@@"<<c<<endl;
				ans=j;
				//cout<<"((("<<ans<<endl;
				
				break;
			}
			j++;

		}
		j=1;
		x=1;
		while(j<10)
	{
		y=(float(n*x-k)/10);
	//	cout<<"$$$"<<y<<endl;
		z=(n*x-k)/10;
		//cout<<"@@@"<<z<<endl;
		if(y==z)
		{
			flg=1;
			//cout<<"$$$"<<x<<endl;
			break;

	

		}
			
		j++;
		x++;

	}
	
	}
	if(flg==0)
		cout<<ans<<endl;
	else
		cout<<min(ans,x)<<endl;
	
	return 0;
}