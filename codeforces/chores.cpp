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
    ll n,k,x;
    cin>>n>>k>>x;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    n=n-k;
    ll sum=0;
    for(ll i=0;i<n;i++)
    	sum=sum+v[i];
    sum=sum+(x*k);
    cout<<sum<<endl;


return 0;
}
