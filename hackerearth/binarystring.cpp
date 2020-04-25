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
ll fun(string s)
{
	ll count=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='0')
			count++;
	}
	return count;
}  
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
           string s;
           cin>>s;
           ll o=fun(s);
           cout<<o<<endl;
    }
return 0;
}
		
