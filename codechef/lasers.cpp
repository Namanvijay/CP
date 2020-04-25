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
          

          ll n,q;
          cin>>n>>q;
          vec v(n+1);
          v[0]=-1;
          for(ll i=1;i<=n;i++)
          	cin>>v[i];
          while(q--)
          {
          	ll x1,x2,y;
          	cin>>x1>>x2>>y;
          	ll c=0;
          	for(ll j=x1;j<x2;j++)
          	{
          		if((v[j]>y && v[j+1]<y) || (v[j+1]>y && v[j]<y) || (v[j+1]==y) || (v[j]==y))
          			c++;
          	}

          	cout<<c<<endl;
          }

    }
return 0;
}
		
