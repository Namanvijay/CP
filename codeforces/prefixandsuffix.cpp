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
    ll flg=0;
    map <ll,vector <ll>> m;
    vector <string> v;
    vector <char> vi(2*n-2);
    char f;
    for(ll i=0;i<2*n-2;i++)
    {
    	string s;
    	cin>>s;
    	ll q=s.length();
    	m[q].pb(i);
    	v.pb(s);
    	if(q==n-1 && flg==0)
    	{
    		f=s[0];
    		flg=1;
    	}

    	
    }

    for(auto it=m.begin();it!=m.end();it++)
    {
    	// ll t=0;
    	// for(ll i=0;i<2;i++)
    	// {


    		 ll in=it->second[0];
    		 ll out=it->second[1];
    	
    	
    		// ll r=m[s.size()][i];
    		string sp=v[in];
    		if(sp[0]==f)
    		{
    			vi[in]='P';
    			vi[out]='S';
    		}
    		else if(sp[0]!=f)
    		{
    			vi[in]='S';
    			vi[out]='P';
    		}
    	

    	// }
    }

    for(ll i=0;i<vi.size();i++)
    	cout<<vi[i];

    cout<<endl;
    
    	

    



return 0;
}
