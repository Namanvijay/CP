//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll mod=pow(10,9)+7;
int main()
{
	ll n,m,t,l,r;
	cin>>n;
	vector <ll> s1(100010,0),s2(100010,0);
	ll v1[100010];
	for(ll i=0;i<n;i++)
	{
		cin>>v1[i];
		s1[i+1]=s1[i]+v1[i];
	}
	
	
	sort(v1,v1+n);
		//for(ll i=0;i<n;i++)
		//cout<<v1[i]<<" ";
	
	//cout<<"\n";

	
	for(ll i=0;i<n;i++)
	{
		s2[i+1]=s2[i]+v1[i];
	}
	//for(ll i=0;i<=n;i++)
	//{
		//cout<<s2[i]<<" ";
	//}

	cin>>m;
	for(ll i=0;i<m;i++)
	{
         cin>>t>>l>>r;
         if(t==1)
         {
         	ll p=s1[r]-s1[l-1];
         	cout<<p<<endl;
         }
         else
         {
         	ll p=s2[r]-s2[l-1];
         	cout<<p<<endl;
         }
	}
	return 0;


}