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
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    sort(v.begin(),v.end());
    vec vi(n);
    ll sum=0;

    for(ll i=0;i<n;i++)
    	vi[i]=i+1;
    for(ll i=0;i<n;i++)
    {

    	if(vi[i]>v[i])
    		sum=sum+vi[i]-v[i];
    	else if(vi[i]<v[i])
    	{
    		ll c=1;
    		while(find(v.begin(),v.end(),vi[i])!=v.end())
    		{
    			
    		}

    		vi[i]=vi[i]+1;
    		
    			sum=sum+vi[i]-v[i];
    		else
    			c++;

    	}
    }
    cout<<sum<<endl;

return 0;
}
