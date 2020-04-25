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
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll flg=0;
    for(ll i=0;i<s.length();i++)
    {
    	if(s[i]=='7')
    	{
    		flg=1;
    		break;
    	}
    }
    if(flg==1)
    	cout<<"Yes"<<endl;
    else
    	cout<<"No"<<endl;

return 0;
}
