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
       string s;
       cin>>s;
       ll ans=0;
       // vector <char> v(25);
       string s1;
       s1=s;
       sort(s1.begin(),s1.end());
       reverse(s1.begin(),s1.end());

       for(ll i=0;i<n;i++)
       {
       	  char ch=s1[i];
       	  for(ll j=0;j<n;j++)
       	  {

       	  	if(s[j]==ch && (s[j-1]==ch-1 || s[j+1]==ch-1))
       	  	{
       	  		s.erase(s.begin()+j);
       	  		ans++;
       	  	}
       	  }
       }

       cout<<ans<<endl;


return 0;
}
