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
bool fun(pair<ll,ll> &a,pair<ll,ll> &b)

{
    return a.first<b.first;
}
int main()
{
    
    ll n;
    cin>>n;
    vec v(n);
    vector <pair <ll,ll>> vi;
    for(ll i=0;i<n;i++)
    {

    	cin>>v[i];
    	vi.pb(mp(v[i],i+1));

    }
    ll ans=INT_MIN;
    sort(vi.begin(),vi.end(),fun);
    // for(ll i=0;i<vi.size();i++)
    	// cout<<vi[i].first<<" "<<vi[i].second<<endl;

    // vec vp(n);
    vector <pair <ll,ll>> vp;
    for(ll i=0;i<vi.size();i++)
    {
    	ll z=vi[i].first-vi[i].second;
    	vp.pb(mp(z,vi[i].first));
    }
    sort(vp.begin(),vp.end(),fun);

    // for(ll i=0;i<vp.size();i++)
    	// cout<<vp[i].first<<" "<<vp[i].second<<endl;

     ll sum=vp[0].second;
    for(ll i=0;i<vp.size()-1;i++)
    {
    	if(vp[i].first==vp[i+1].first)
    	{
    		// cout<<"&&&"<<sum<<endl;
    		// cout<<"###"<<vp[i+1].second<<endl;
    		sum=sum+vp[i+1].second;
    	}

    	else
    	{
                   ans=max(ans,sum);
                   // cout<<"((("<<ans<<endl;
                   sum=vp[i+1].second;
    	}
    }
    ans=max(ans,sum);

    cout<<ans<<endl;

return 0;
}
