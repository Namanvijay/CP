//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001

void dfs(ll s,vector <ll> &arr, vector <ll> &vis,vector <ll> &conn,map <ll,ll> &m,ll temp)

{
      
      //cout<<"((("<<s<<endl;
      //cout<<"!!!"<<vis[s]<<endl;
      //cout<<"!!!"<<temp<<endl;
      conn[s]=temp;

      vis[s]=1;
      
      //cout<<"@@@"<<conn[s]<<endl;
      if(vis[m[s]]==0)
      	dfs(m[s],arr,vis,conn,m,temp);


}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;

		cin>>n;
		vector <ll> arr(n+1),vis(n+1),conn(n+1);
		for(ll i=1;i<=n;i++)
		{
			vis[i]=0;
			conn[i]=0;
		}
		map <ll,ll> m;

		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			m[i+1]=arr[i];
		}
		ll temp=1;

		for(auto it=m.begin();it!=m.end();it++)
		{
			if(vis[it->first]==0)
			{
				dfs(it->first,arr,vis,conn,m,temp);
				temp++;

			}
			
			
			//cout<<it->first<<" "<<it->second<<endl;

		}
	//	cout<<"\n";
		map <ll,vector <ll>> m1;
		vector <ll> f(n+1,1);


		for(ll i=1;i<=n;i++)
		{
                m1[conn[i]].pb(i);


		}

		for(auto it=m1.begin();it!=m1.end();it++)
		{
			for(ll i=0;i<it->second.size();i++)
			{
				f[it->second[i]]=it->second.size();
			}
		}

		for(ll i=1;i<=n;i++)
			cout<<f[i]<<" ";
		cout<<"\n";
			//cout<<conn[i]<<" ";
			



			
		

			



	}
}