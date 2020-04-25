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
      
      string s;
      ll ans=INT_MAX;
      cin>>s;
      map <ll,vector <ll>> m;
      ll i=0;
      vec v;
      ll j=s.length()-1;
      while(i<j)
      {
      	if(s[i]=='(' && s[j]==')')
      	{
      		v.pb(i+1);
      		v.pb(j+1);
      		i++;
      		j--;
      	}

      	else if(s[i]==')')
      	{
      		i++;
      	}

      	else if(s[i]=='(')
      	{
      		j--;
      	}
      }
      if(v.size()==0)
      	cout<<0<<endl;
      else
      {
      	  cout<<1<<endl;
      	  cout<<v.size()<<endl;
      	  sort(v.begin(),v.end());
      for(ll i=0;i<v.size();i++)
      	cout<<v[i]<<" ";
      }

      

  
      
return 0;
}
