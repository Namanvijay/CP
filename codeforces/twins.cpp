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
   ll sum=0;
   vec v(n);
   for(ll i=0;i<n;i++)
   {
   	     	cin>>v[i];
   	     	sum=sum+v[i];
   }
    float p=float(sum)/2;
   // cout<<"^^^"<<p;
 
   sort(v.begin(),v.end());
   ll c=1;
   for(ll i=n-1;i>=0;i--)
   {
           if(v[i]>p)
           	break;
           p=p-v[i];
           c++;
   }
   cout<<c<<endl;
return 0;
}
