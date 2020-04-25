#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack <string> s;
	string s1;
	cin>>s1;
	for(int i=s1.size()-1;i>=0;i--)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			string x(1,s1[i]);
			s.push(x);
		}
		else
		{
			string x=s.top();
			s.pop();
			string y=s.top();
			s.pop();
			s.push(x+y+s1[i]);
		}


	}
	cout<<s.top();
	return 0;
}