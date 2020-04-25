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
    ll n,k;
    cin>>n;
    cin>>k;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    sort(v.begin(),v.end());
    for(ll i=0;i<n-1;i++)
    {
    	ll flg=0;
    	ll x=i;
    	ll l=i+1;
    	ll r=n-1;
    	while(l<r)
    	{
    		if((v[x]+v[l]+v[r])==k)
    		{
    			cout<<v[x]<<" "<<v[l]<<" "<<v[r]<<endl;
    			flg=1;
    			break;
    		}
    		else if((v[x]+v[l]+v[r])>k)
    		{
    			r--;
    		}
    		else
    			l++;
    	}
    	if(flg==1)
    		break;
    }

return 0;
}
