#include <bits/stdc++.h>
using namespace std;


string big(string s1,string s2)
{

	int n1=s1.size();
	int n2=s2.size();
	string s3="";
	int c=0;
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());

	for(int i=0;i<n2;i++)
	{

		int sum=(s1[i]-'0')+(s2[i]-'0')+c;
		s3[i]=sum%10+'0';
		c=sum/10;


	}


	for(int i=n2;i<n1;i++)
	{
		int sum=s1[i]-'0'+c;
		s3[i]=sum%10+'0';
		c=sum/10;

	}

	if(c)
	{
		s3.push_back(c+'0');
	}

	reverse(s3.begin(),s3.end());
	return s3;


}



int main()
{

	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	cout<<big(s1,s2);
	return 0;


}