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
    ll n,x,y;
    cin>>n>>x>>y;
    vec v(n);
    ll c=0;
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    sort(v.begin(),v.end());
    if(x>y)
    	cout<<n<<endl;
    else 
    {
    	for(ll i=0;i<n;i++)
    	{
    		if(v[i]<=x)
    			c++;
    	}

    	if(c%2==0)
    		cout<<c/2<<endl;
    	else
    		cout<<c/2+1<<endl;
    }

return 0;
}
