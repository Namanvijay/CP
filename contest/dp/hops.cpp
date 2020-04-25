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
ll fun(ll n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	if(n==3)
		return 4;
	return fun(n-1)+fun(n-2)+fun(n-3);
}  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    ll ans;
    while(t--)
    {
        ll n;
        cin>>n;
        ans=fun(n);
        cout<<ans<<endl;

    }
return 0;
}
		
