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
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++)
    {
          ll n;
          cin>>n;
          ll q=n-1;
          ll r=2*(n-1)+3;
          vec v;
          if(n==1)
          	cout<<-1<<endl;
          else
          {

          	 if(r%3!=0)
          {
          	  for(ll i=0;i<n-1;i++)
          	  	v.pb(2);
          	  v.pb(3);
          	  for(ll i=0;i<n;i++)
          	  	cout<<v[i];
          	  cout<<endl;
          }

          else
          {
          	  for(ll i=0;i<n-2;i++)
          	  	v.pb(2);
          	  v.pb(3);
          	  v.pb(3);
          	  for(ll i=0;i<n;i++)
          	  	cout<<v[i];
          	  cout<<endl;
          }

          }
         
    }
return 0;
}
		
