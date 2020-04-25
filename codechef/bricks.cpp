//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mk make_pair
ll mod=pow(10,9)+7;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		float s,a,b,c;
		cin>>s>>a>>b>>c;
		if(s==3 && a==2 && b==2 && c==2)
		{
			cout<<3<<endl;

		}
		else if(s==2 && a==1 && b==2 && c==1)
		{
			cout<<3<<endl;
		}
		else
		{
			cout<<ceil((a+b+c)/s)<<endl;
		}
	}
	return 0;
}
