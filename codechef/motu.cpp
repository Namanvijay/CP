
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
#define endl "\n"
#define inf INT_MAX
#define vec vector <ll>
#define mps map <ll,ll>  
#define all(v) v.begin(),v.end()
#define infi LLONG_MAX
#define pi 3.141592653
#define ninf INT_MIN
#define ninfi LLONG_MIN
#define lbn lower_bound
#define ubn upper_bound
#define memset(a,b) memset(a,(b),sizeof(a))
ll f(ll n)
{
	ll c=0;
	while(n)
	{

		c+=n&1;
		n=n>>1;
	}
	return c;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
     for(ll i=0;i<t;i++)
    {
    	ll n;
    	cin>>n;
    	cout<<f(n)-1<<endl;;

    }
return 0;
}
		
