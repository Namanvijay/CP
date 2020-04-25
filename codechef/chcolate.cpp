//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

/************** Code by naman ******/

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
    while(t--)
    {
        ll n;
        cin>>n;
        vec v(n);
        mps m;
        ll ma=INT_MIN;
        for(ll i=0;i<n;i++)
        {

        	cin>>v[i];
        	m[v[i]]++;
        	ma=max(ma,v[i]);
        }

        // cout<<ma<<endl;
        map <ll,vector <ll>> mi;

        for(ll i=0;i<n;i++)
        {
        	if(v[i]==ma)
        		mi[ma].pb(i+1);
        }

        ll l=mi[ma][0];
        ll r=mi[ma][mi[ma].size()-1];
        // cout<<l<<" "<<r<<endl;
        ll diff=(r-l);
        ll ans=(n/2-diff);
        if(ans<0)
        	cout<<0<<endl;
        else 
        	cout<<ans<<endl;
        // cout<<"^^^"<<q<<endl;
        // if(q==0)
        	// cout<<n<<endl;



    }
return 0;
}
		
