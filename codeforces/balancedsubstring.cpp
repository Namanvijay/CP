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
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map <ll,ll> m;
    m[0]=-1;
    ll ans=0;
    ll c1=0,c0=0;
    for(ll i=0;i<n;i++)
    {
    	if(s[i]=='0')
    		c0++;
    	else
    		c1++;
    	if(m.find((c1-c0))==m.end())
    	{
    		m[(c1-c0)]=i;
    	}

    	else
    	{
    		ans=max(ans,(i-m[(c1-c0)]));
    	}

    }
    cout<<ans<<endl;

return 0;
}
