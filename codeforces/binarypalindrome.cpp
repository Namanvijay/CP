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
		ll n,c1=0,c=0,ans=0,x=0,cp=0;
		string s;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>s;
			x=s.length();
			if(x%2==0)
				cp++;
			for(ll j=0;j<s.length();j++)
			{
				if(s[j]=='1')
					c1++;
				else
					c++;
			}

		}
		ll odd=n-cp;
		if(odd==0 && (c1%2==1 || c%2==1)  )
			cout<<n-1<<endl;
		else
			cout<<n<<endl;


			
		  

		
	}
	return 0;
}