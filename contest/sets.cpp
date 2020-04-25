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
ll lcm(ll a,ll b)
{
	return (a*b)/__gcd(a,b);

}  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vec v(n),vi(m);
    ll l;
    for(ll i=0;i<n;i++)
    {
    	cin>>v[i];
    	// l=lcm(l,v[i]);
    }
    l=v[0];
    for(ll i=1;i<n;i++)
    	l=lcm(l,v[i]);
    // cout<<l<<endl;
    ll g;

    for(ll i=0;i<m;i++)
    {
    	cin>>vi[i];
    	// g=__gcd(g,vi[i]);

    }
    g=vi[0];
    for(ll i=1;i<m;i++)
    	g=__gcd(g,vi[i]);
    // cout<<g<<endl;
    ll i=2,c=0,temp=l;

    while(l<=g)
    {
    	
    	if(g%l==0)
    		c++;
    	l=temp*i;

    	i++;

    }

    cout<<c<<endl;

return 0;
}
