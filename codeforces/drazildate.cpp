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
   
   ll a,b,s;
   cin>>a>>b>>s;
   ll p=abs(a)+abs(b);
   if(p>s)
   	cout<<"NO"<<endl;
   else
   {

       ll e=(s-p);
       if(e%2==0)
       	cout<<"YES"<<endl;
       else
       	cout<<"NO"<<endl;

   }

return 0;
}
