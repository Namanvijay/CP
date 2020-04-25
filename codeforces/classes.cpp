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
    ll t;
    cin>>t;
    while(t--)
    {
          ll n;
          cin>>n;
          vec v(2*n);
          for(ll i=0;i<2*n;i++)
          	cin>>v[i];
          sort(v.begin(),v.end());
          ll p=v[(2*n)/2];
          ll q=v[(2*n)/2-1];
          cout<<abs(p-q)<<endl;
    }
return 0;
}
		
