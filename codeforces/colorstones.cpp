//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	string s,s1;;
	cin>>s;
	cin>>s1;
	ll pos=1;
	ll i=0;
	ll j=0;
	while(j<s1.length())
	{
            if(s[i]==s1[j])
            	i++;
            j++;
	}
	cout<<i+1<<endl;
	return 0;

}