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
   vector <char> v;
   for(ll i=0;i<n;i++)
   {
   	  if(s[i]=='0')
   	  	continue;
   	  else if(s[i]=='1')
   	  	continue;
   	  else if(s[i]=='2')
   	  	v.pb('2');
   	  else if(s[i]=='3')
   	  	v.pb('3');
   	  else if(s[i]=='4')
   	  {
   	  	v.pb('3');
   	  	v.pb('2');
   	  	v.pb('2');

   	  }
   	  else if(s[i]=='5')
   	  	v.pb('5');
   	  else if(s[i]=='6')
   	  {
   	  	v.pb('5');
   	  	v.pb('3');

   	  }
   	  else if(s[i]=='7')
   	  	v.pb('7');
   	  else if(s[i]=='8')
   	  {
   	  	v.pb('7');
   	  	v.pb('2');
   	  	v.pb('2');
   	  	v.pb('2');
   	  }
   	  else if(s[i]=='9')
   	  {
   	  	v.pb('7');
   	  v.pb('3');
   	  v.pb('3');
   	  v.pb('2');

   	  }
   	  	
   	  	
   }

   sort(v.begin(),v.end());
   for(ll i=v.size()-1;i>=0;i--)
   	cout<<v[i];
   cout<<endl;

return 0;
}
