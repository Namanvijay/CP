//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

/************** Code by naman ******/

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
unsigned ll fun(unsigned ll n)
{
// 	ll c=0;
// 	ll temp=n;
// 	while(temp)
// 	{
// 		c++;
// 		temp=temp>>1;
// 	}

	// cout<<"%%%"<<c<<endl;

	for(ll i=0;i<31;i++)
		n=n^(1<<i);
	// cout<<"%%%"<<n<<endl;

	n=n+pow(2,31);
	if(n>4294967295)
		n=n-4294967296;
	return n;


}  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
           
            unsigned ll n;
           cin>>n;
           ll  ans=fun(n);
           cout<<ans<<endl;
    }
return 0;
}
		
