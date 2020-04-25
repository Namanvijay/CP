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
    vec v1(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    for(ll i=0;i<n;i++)
    	cin>>v1[i];
     vector <ll> gr;
     ll eq=0,g=0;
     vec lt;
    for(ll i=0;i<n;i++)
    {
    	if(v[i]>v1[i])
    	{

    		gr.pb(v[i]-v1[i]);
    		g++;
    	}

    	else if(v[i]==v1[i])
    		eq++;

    	else
    	{
    		lt.pb(v1[i]-v[i]);
    	}


    }
    // cout<<"((("<<eq<<endl;
    // cout<<")))"<<g<<endl;


    ll ans=(eq*g)+(g*(g-1)/2);


    // cout<<"&&&"<<ans<<endl;
    sort(lt.begin(),lt.end());
    // for(ll i=0;i<lt.size();i++)
    	// cout<<"!!!"<<lt[i]<<endl;
    for(ll i=0;i<gr.size();i++)
    {
    	auto it=lower_bound(lt.begin(),lt.end(),gr[i])-lt.begin();
    	// cout<<"***"<<it<<endl;
    	ans=ans+it;
    }

    cout<<ans<<endl;

return 0;
}
