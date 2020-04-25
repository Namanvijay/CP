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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--)
    // {
            ll n;
            cin>>n;
            vec v(n);
            for(ll i=0;i<n;i++)
            {
            	cin>>v[i];
            }

            ll ans=0;

            sort(v.begin(),v.end());
            for(ll i=0;i<n-1;i+=2)
            {
            	ll diff=(v[i+1]-v[i]);
            	ans=ans+diff;
            }

            cout<<ans<<endl;
    // }
return 0;
}
		
