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
    ll x,y,p,q;
    cin>>x>>y>>p>>q;
    ll a=(p*y);
    ll b=(q*x);
    ll g=__gcd(a,b);
    a=(p*y)/g;
    b=(q*x)/g;
    ll b1=a;
    ll b2=b;
    ll f=b1*x;
    ll d=__gcd(b1*x,p);
    f=f/d;
    p=p/d;
    ll b3=f/p;

    // ll b4=(b2*y)/p;
    cout<<b1<<" "<<b2<<" "<<b3<<endl;
    // cout<<b4<<endl;

return 0;
}
