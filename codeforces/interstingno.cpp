//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
ll fun(ll n)
{
	ll temp;
	ll sum=0;
	while(n)
	{
		temp=n%10;
		sum=sum+temp;
		n=n/10;
	}

	return sum;
}
int main()
{
	ll n;
	cin>>n;
	ll sum;
	sum=fun(n);
	//cout<<sum<<endl;
	ll si=sum%4;
	if(si==0)
		cout<<n<<endl;
	else
	{
		while(1)
		{
			n=n+1;
		sum=fun(n);
		if(sum%4==0)
		{
			cout<<n<<endl;
			break;

		}
		}
		
		
			

	}


}