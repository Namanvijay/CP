

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
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	ll n;
    	cin>>n;
    	vec v(n);
    	for(ll i=0;i<n;i++)
    		cin>>v[i];
    	
    	sort(v.begin(),v.end());
    	reverse(v.begin(),v.end());
    
    	vec vii;
    	for(ll i=0;i<n/2;i++)
    	{
    		vii.pb(v[i]);
    		vii.pb(v[n-i-1]);
    	}
    	if(n%2!=0)
    	{
    		vii.pb(v[n/2]);
    	}
    	reverse(vii.begin(),vii.end());

    	for(ll i=0;i<vii.size();i++)
    		cout<<vii[i]<<" ";
    	cout<<endl;






    }
return 0;
}
		
