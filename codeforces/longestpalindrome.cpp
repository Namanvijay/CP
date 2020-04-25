//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
int main()
{
	ll n,m;
	cin>>n>>m;
	string s;
	vector <string> v,v1,f,r;
	ll flg=0;
	for(ll i=0;i<n;i++)
	{
		cin>>s;
		v.pb(s);
	}
 
	vector <ll> v2(n,0);
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(j!=i && v2[i]==0 && v2[j]==0)
			{
				ll k=0;
				while(k<n)
				{
					if(v[i][k]==v[j][m-k-1])
						k++;
					else
						break;
				}
				if(k==n)
				{
					//cout<<"&&&&"<<v[i]<<endl;
					//cout<<"((("<<v[j]<<endl;
					f.pb(v[i]);
					r.pb(v[j]);
					//cout<<f[0]<<endl;
					v2[i]=1;
					v2[j]=1;
 
				}
 
					
 
 
			}
		}
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(j==i && flg==0 && v2[i]==0)
			{
 
				ll k=0;
				while(k<n)
				{
					if(v[i][k]==v[j][m-k-1])
						k++;
					else
						break;
				}
				if(k==n)
				{
					f.pb(v[i]);
					//cout<<"!!!"<<v[i]<<endl;
					//r.pb(v[j])
					v2[i]=1;
					flg=1;
					//v2[j]=1;
 
				}
			}
 
 
			
		}
	}		
			
		
 
	
	cout<<((f.size()*m)+(r.size()*m))<<endl;

 
	for(ll i=0;i<f.size();i++)
		cout<<f[i];
	//cout<<"\n";
	for(ll i=0;i<r.size();i++)
		cout<<r[r.size()-1-i];
 
 
 
}