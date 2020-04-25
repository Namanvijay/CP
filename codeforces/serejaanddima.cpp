//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	ll flg=0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	ll ss=0,ds=0;
	ll j=0;
	ll l=0,h=n-1;
	while(j<n)
	{
		
		if(flg==0)
		{
                ll s=max(arr[l],arr[h]);
                
                	if(s==arr[l])
                	{
                		ss=ss+arr[l];
                		l++;
                		j++;
                		flg=1;
                	}

                	else
                	{
                		ss=ss+arr[h];
                		h--;
                		j++;
                		flg=1;
                	}
                
		}

		else
		{

			ll s=max(arr[l],arr[h]);
                
                	if(s==arr[l])
                	{
                		ds=ds+arr[l];
                		l++;
                		j++;
                		flg=0;
                	}

                	else
                	{
                		ds=ds+arr[h];
                		h--;
                		j++;
                		flg=0;
                	}
		}
	}

	cout<<ss<<" "<<ds<<endl;
	return 0;
}