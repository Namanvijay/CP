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

    ll k=n*(n+1)/2;
    if(k%2==0)
    	cout<<0<<endl;
    else
    	cout<<1<<endl;

return 0;
}
