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
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {

    	ll n,a,b;
    	cin>>n>>a>>b;
    	vector<char> v(n);
    	ll q=26;
    	 // b=min(a,q);
    	// ll j=0;
    	for(ll i=0;i<b;i++)
    	{
    		char ch='a'+i;
    		v[i]=ch;
    		

    	}
    	char c=v[b-1];
    	// cout<<c<<endl;
    	for(ll i=b;i<a;i++)
    		v[i]=c;


    	
    	ll j=0;
    	// char x=v[b-1];


    	for(ll i=a;i<n;i++)
    	{
    		char ch='a'+j%26;
    		v[i]=ch;
    		j++;
    	}

    	for(ll i=0;i<n;i++)
    		cout<<v[i];
    	cout<<endl;






    }
return 0;
}
		
