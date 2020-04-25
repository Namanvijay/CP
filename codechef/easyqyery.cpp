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
    ll n,q;
    cin>>n>>q;
    vec v(n);
     set<ll> s;
    for(ll i=0;i<n;i++)
    {
    	cin>>v[i];
    	if(v[i]==1)
    		s.insert(i);
    }
    while(q--)
    {
    	ll t,in;
    	cin>>t>>in;
    	ll l=-1,r=-1;
    	if(t==1)
    		s.insert(in);
    	else
    	{
    		auto lit=s.lower_bound(in);
    		auto uit=s.upper_bound(in);
    		// cout<<"&&&"<<*lit<<" "<<*uit<<endl;
    		auto kp=s.end();
    		auto pp=s.begin();
    		// cout<<*pp<<endl;
    		// cout<<*kp<<endl;
    		if(uit!=s.end() && s.size())
    		{
    			// cout<<"%%%"<<endl;
    			r=*uit;
    		}

    		if(lit!=s.begin() && s.size())
    		{
    			// cout<<"@@@@"<<endl;
    			*lit--;
    			l=*lit;
    		}

    			cout<<l<<" "<<r<<endl;


    	}


    	
    	

    }

return 0;
}
