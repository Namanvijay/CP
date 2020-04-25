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
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
    vec freq(maxn,0);
    vec occu(maxn,-1);

bool fun (ll a,ll b)
{
	if(freq[a]!=freq[b])
	return freq[a]>freq[b];
	
		return occu[a]<occu[b];
}
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    
   
    vec v(n);
    for(ll i=0;i<n;i++)
    {
    	cin>>v[i];
    	freq[v[i]]++;
    	if(occu[v[i]]==-1)
    		occu[v[i]]=i;
    	
    }
    // for(ll i=0;i<occu.size();i++)
    // 	cout<<occu[i]<<" ";

    sort(v.begin(),v.end(),fun);
    	for(ll i=0;i<n;i++)
    		cout<<v[i]<<" ";
    	cout<<endl;

return 0;
}
