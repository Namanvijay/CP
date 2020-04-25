//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	string s;
	cin>>s;
	set<char> se;
	for(ll i=0;i<s.length();i++)
	{
          se.insert(s[i]);
	}

	if(se.size()%2!=0)
		cout<<"IGNORE HIM!"<<endl;
	else
		cout<<"CHAT WITH HER!"<<endl;

	return 0;
}