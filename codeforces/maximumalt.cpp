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
    vec b(n);
    vec a(n);
    for(ll i=0;i<n;i++)
    	cin>>b[i];
    a[0]=b[0];
    for(ll i=1;i<n;i++)
    {
    	a[i]=b[i]+max((a[i-1]-b[i-1]),a[i-1]);
    }

    for(ll i=0;i<n;i++)
    	cout<<a[i]<<" ";
    cout<<endl;

return 0;
}
