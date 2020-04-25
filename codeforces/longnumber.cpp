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
    vec v(10);
    string s;
    cin>>s;
    v[0]=-1;
    for(ll i=1;i<=9;i++)
    	cin>>v[i];
    ll l=-1,r=-1;
    ll flg=0,rq=0;
    for(ll i=0;i<n;i++)
    {
    	if((v[s[i]-'0']>s[i]-'0') && flg==0)
    	{
    		l=i;
    		flg=1;
    		rq=1;
    		r=i;
    	}
    	else if((v[s[i]-'0']>=s[i]-'0') && flg==1)
    	{
    		r=i;
    		rq=1;

    	}
    	else if(v[s[i]-'0']<s[i]-'0' && rq==0)

    		continue;

    	else if(v[s[i]-'0']<s[i]-'0' && rq==1)
    	{
                   flg=2;
    	}
    }

    for(ll i=0;i<l;i++)
    	cout<<s[i]-'0';
    for(ll i=l;i<=r;i++)
    {
    	if(i<0)
    	continue;
    else
    	
    	cout<<v[s[i]-'0'];
    }
    for(ll i=r+1;i<n;i++)
    	cout<<s[i]-'0';
    cout<<endl;

return 0;
}
