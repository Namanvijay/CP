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
          ll temp;
          for(ll i=0;i<32;i++)
          {
          	  if(!(n&(1<<i)))
          	  {
          	  	 
          	  	  temp=i;
          	  	  
          	  	  break;
          	  }
          }

          n=n|1<<temp;
          cout<<n<<endl;
    }
return 0;
}
		
