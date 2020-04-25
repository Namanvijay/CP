#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack <string> s;
	string s1;
	cin>>s1;
	for(int i=0;i<s1.size();i++)
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
			s.push( s1[i] + y+ x );
		}


	}
	cout<<s.top();
	return 0;
}