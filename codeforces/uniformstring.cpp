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
       ll n,k;
       cin>>n>>k;
       string s="";
       ll temp=n;
       ll r=n%k;
       n=n-r;
       ll f=n/k;
       for(ll i=0;i<k;i++)
       {
                  char c='a'+i;
                  for(ll i=0;i<f;i++)
                  	s=s+c;

       }
         char c='a'+k-1;

       for(ll i=0;i<r;i++)
       {
       	  s=s+c;

       }

       cout<<s<<endl;
    }
return 0;
}
		
