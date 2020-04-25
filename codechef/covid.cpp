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
       vec v(n);
       for(ll i=0;i<n;i++)
       	cin>>v[i];
       map <ll ,vector <ll>> m;
       for(ll i=0;i<n;i++)
       {
       	  if(v[i]==1)
       	  	m[1].pb(i);
       }
       ll flg=0;

       for(ll i=0;i<m[1].size()-1;i++)
       {
       	  ll q=m[1][i+1]-m[1][i];
       	  if(q<6)
       	  {
       	  	flg=1;
       	  	break;
       	  }
       }

       if(flg==0)
       	cout<<"YES"<<endl;
       else
       	cout<<"NO"<<endl;
    }
return 0;
}
		
