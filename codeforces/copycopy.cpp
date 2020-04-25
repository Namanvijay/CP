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
           set <ll> s;
          for(ll i=0;i<n;i++)
          {
          		cin>>v[i];
          		s.insert(v[i]);
         
          }

          cout<<s.size()<<endl;
          

    }
return 0;
}
		
