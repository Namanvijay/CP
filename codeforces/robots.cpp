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
      ll n;
      cin>>n;
      vec v(n);
      vec v1(n);
      ll e1=0,e2=0,c=0;
      for(ll i=0;i<n;i++)
      {
      	cin>>v[i];
      	if(v[i]==1)
      		e1++;
      }
      	
      for(ll i=0;i<n;i++)
      {
      	cin>>v1[i];
      	if(v1[i]==1)
      		e2++;

      }
      	
      for(ll i=0;i<n;i++)
      {
      	if(v[i]==1 && v1[i]==0)
      		c++;
      }
      if(c==0)
      	cout<<-1<<endl;
      else
      {
      	    ll x=(e2-(e1-c))/c+1;
      cout<<x<<endl;

      }

  

return 0;
}
