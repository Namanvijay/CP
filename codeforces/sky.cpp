//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	ll temp=LLONG_MAX,sum,ans[n];
	ll arr[n],b[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	for(ll i=0;i<n;i++)
	{
		b[i]=arr[i];
		sum=0;
		for(ll j=i+1;j<n;j++)
		{
              if(arr[j]>b[j-1])
              {
              	sum=sum+arr[j]-b[j-1];
              	b[j]=b[j-1];

              }
              else
              	b[j]=arr[j];
		}

		for(ll j=i-1;j>=0;j--)
		{
			if(arr[j]>b[j+1])
			{
				sum=sum+arr[j]-b[j+1];
				b[j]=b[j+1];

			}

			else
				b[j]=arr[j];
		}

		if(sum<temp)
		{
			//cout<<"!!!!"<<sum<<endl;
			//cout<<"****"<<temp<<endl;
			temp=sum;
			for(ll k=0;k<n;k++)
				ans[k]=b[k];
			
		}

	}

		for(ll i=0;i<n;i++)
			cout<<ans[i]<<" ";

	return 0;
}