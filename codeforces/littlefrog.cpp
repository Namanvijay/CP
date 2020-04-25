//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	ll c=0;
	ll p=1,q=n-1;
	ll flg=0;
	while(c<n)
	{
         cout<<p<<" ";
         if(flg==0)
         {
         	p=p+q;
         	q--;
         	flg=1;
         }
         else
         {
         	p=p-q;
         	q--;
         	flg=0;
         }
         c++;
         	


	}

	return 0;
}