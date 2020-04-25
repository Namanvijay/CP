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
    set <ll> s;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    	char a;
    	ll b;
    	cin>>a>>b;
    	if(a=='+')
    		s.insert(b);
    	else
    	{
    		if(s.find(b)==s.end())
    		{
    			ans++;
    		}

    		else
    		{
    			s.erase(b);
    		}
    	}
    	ll q=s.size();

    	ans=max(ans,q);


    }

    cout<<ans<<endl;

return 0;
}
