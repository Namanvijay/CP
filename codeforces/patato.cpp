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
   ll y,k,n;
   cin>>y>>k>>n;
   ll x;

   ll z=y%k;
   if(z==0)
   {
   	  x=k;
   }
   else
   {
   	    ll r=k-z;
         x=r;
   }

   ll flg=0;

 
   while(x+y<=n)
   {
   	  cout<<x<<" ";
   	  x=x+k;
   	  flg=1;

   }
   cout<<endl;
   if(flg==0)
   	cout<<-1<<endl;
   


return 0;
}
