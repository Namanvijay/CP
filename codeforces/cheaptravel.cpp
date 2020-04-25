//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
/********** code by naman *******/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
#define endl "\n"
#define im INT_MAX
#define vec vector <ll>
#define mps map <ll,ll>  
int main()
{
	ll n,m,a,b;
	cin>>n>>m>>a>>b;
	float p1;
	p1=(float(b)/m);
	// cout<<p1<<endl;
	if(a<=p1)
	{
		cout<<a*n<<endl;
	}
	else
	{

		ll rem=n%m;
		ll temp=n;
		temp=temp-rem;
		ll ans;
		ans=temp*p1;
		ll t=min(((n-temp)*a),b);
		 cout<<ans+t<<endl;

	}


return 0;
}
