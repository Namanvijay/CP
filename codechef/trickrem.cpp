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
    	ll a,b,c;
    	cin>>a>>b>>c;
    	ll n;
    	ll q;
    	q=0;
    	set<ll> s;
    	while(1)
    	{
    		n=q*a+b;
    		s.insert(n);
    		if(n>c)
    			break;
    		else
    			q++;
    	
    	}

    	auto it=s.lower_bound(n);
    	*it--;
    	cout<<*it<<endl;





    }
return 0;
}
		
