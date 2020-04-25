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
          vec v(n),vi(n);
          set <ll> s;
          for(ll i=0;i<n;i++)
          {
          		cin>>v[i];
          		s.insert(v[i]);

          }

          ll r=s.size();
          mps m;
          ll q=1;
          for(auto it=s.begin();it!=s.end();it++)
          {
                m[*it]=q;
                q++;
          }

          for(ll i=0;i<n;i++)
          {
          	  q=m[v[i]];
          	  vi[i]=q;

          }

          for(ll i=0;i<n;i++)
          	cout<<vi[i]<<" ";

          cout<<endl;

          
    }
return 0;
}
		
