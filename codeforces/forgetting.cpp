//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll a,b;
	cin>>a>>b;
	if(abs(a-b)>1 && a!=9 && b!=1)
		cout<<"-1"<<endl;
	else if(a==b)
	{
		a=a*10+1;
		b=b*10+2;
		cout<<a<<" "<<b<<endl;

	}
	else if(abs(a-b)==1)
	{
		if(b-a==1)
		{
           b=b*10;
           a=b-1;
           cout<<a<<" "<<b;
		}

	}
	else if(a==9 && b==1)
	{
		b=b*100;
		a=b-1;
		cout<<a<<" "<<b<<endl;
	}
	return 0;

}