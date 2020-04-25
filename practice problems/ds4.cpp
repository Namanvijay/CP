#include <bits/stdc++.h>
using namespace std;

float rsqr(int n,int p)
{
	int l=0;
	float ans;
	int h=n;
	
	while(l<=h)
		
	{    

		int mid=(l+h)/2;

		if(mid*mid==n)
		{
			ans=mid;
			break;
		}
		else if(mid*mid<n)
		{
			l=mid+1;
			ans=mid;
		}

		else
			h=mid-1;
		
	}

	float in=0.1;
	for(int i=0;i<p;i++)
	{
		while(ans*ans<=n)
		ans=ans+in;
		ans=ans-in;

		in=in/10;


	}
	return ans;
	

	
}
int main()
{

	int n;
	cin>>n;
	int p;
	cin>>p;
	cout<<rsqr(n,p);
	return 0;


}