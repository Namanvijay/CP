//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

ll fun1(ll a)

{
     ll num=a;
     ll dec=0;
     ll base=1;
     ll temp=num;
     while(temp)
     {
     	ll last=temp%10;
     	temp=temp/10;
     	dec=dec+base*last;
     	base=base*2;
     }
     return dec;


}

void fun(ll a,ll b)
{
	int count=0;
	
	
	while(b>0)
	{
		ll u=a^b;
		ll v=a&b;
		a=u;
		b=2*v;
		count++;
	
		
		
		
	}

	cout<<count<<endl;

}
int main()
{
	ll t;
	cin>>t;

	while(t--)
	{
		ll a,b,d,e;
		
		cin>>a>>b;
		d=fun1(a);
		e=fun1(b);
		fun(d,e);
		

	}
	return 0;
}