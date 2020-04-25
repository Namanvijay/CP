//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	string s;
	cin>>s;
	ll up=0,low=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]>=97 && s[i]<=122)
			low++;
		else
			up++;
	}	
	cout<<up<<" "<<low<<endl;
		if(up>low)
		{
			transform(s.begin(),s.end(),s.begin(), ::toupper);
			cout<<s<<endl;
		}

		else if(up<low)
		{
			transform(s.begin(),s.end(),s.begin(), ::tolower);
			cout<<s<<endl;
		}
		else
		{transform(s.begin(),s.end(),s.begin(), ::tolower);
			cout<<s<<endl;

		}
	

	return 0;
}