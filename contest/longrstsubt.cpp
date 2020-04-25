//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
/********** code by naman *******/

{
    
};

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
  
int main()
{

 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll n=s.length();
    ll leng=1;
    map<ll,ll> m;
    ll i=0;
    ll j=0;
    // ll j=0;
    // while(1)
    // {
    	// cout<<"((("<<endl;
    	// m[s[i]-'a']++;
    	 // j=i+1;
    	while(j<n)
    	{
    		
    	
    		if(m[s[j]-'a']==0)
    		{
    			m[s[j]-'a']++;
    			j++;
    		}
    		else
    		{
    			leng=max(leng,(j-i));
    			i=j;
    			j=i;
    			m.clear();
    			// break;

    		}

    	}

    	
    	
    // }

    leng=max(leng,(j-i));

    cout<<leng<<endl;

return 0;
}
