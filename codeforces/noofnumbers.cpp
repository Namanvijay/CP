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
    float i;
    ll c=0;
    for(ll k=1;k*(k+1)/2<n;k++)
    {
    	i=float(n-k*(k+1)/2)/(k+1);
    	cout<<i<<endl;

    	if(floor(i)==ceil(i))

    		c++;
    }

    cout<<c<<endl;

return 0;
}
