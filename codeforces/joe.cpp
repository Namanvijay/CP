//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mk make_pair
ll mod=pow(10,9)+7;
int main()
{
	double n;
	cin>>n;
	double sum=0;
	double p=double(1/n);
	//cout<<"!!!"<<p<<endl;
	while(n!=0)
	{
		sum=sum+double(1/n);
		n--;
	}
	cout<<sum<<endl;
	return 0;
}