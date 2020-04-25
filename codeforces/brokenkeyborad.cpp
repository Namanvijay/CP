//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		ll v[26]={0};
		
		cin>>s;
		for(ll i=0;i<s.size();i++)
		{
              if(i==s.size()-1)
              v[s[i]-'a']=1;

		     else
		     {
		     	if(s[i]==s[i+1])
		     		i++;
		     	else
		     		v[s[i]-'a']=1;
		     }
		}
		
		for(ll i=0;i<26;i++)
		{
			if(v[i])
				cout<<char(i+'a');
		}     
		cout<<"\n";
		
	}
	return 0;	




		
}