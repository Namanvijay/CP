

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
       ll n,m,k;
       cin>>n>>m>>k;
       ll vi[n+1];
       ll f=0;

       ll arr[n+1][k+1];
       for(ll i=1;i<=n;i++)
       {
       	  for(ll j=1;j<=k;j++)
       	  	cin>>arr[i][j];
       }

       for(ll i=1;i<=n;i++)
       {
       	  ll d[m+1]={0};

       	 for(ll j=1;j<=k;j++)
       	 {
       	 	ll p=arr[i][j];
       	 	d[p]++;

       	 }
       	 ll ans=0;
       	 ll ans1=INT_MAX;
       	 if(f==1)
       	 {
       	 	
       	 	 for(ll p=1;p<=m;p++)
       	 {
       	 	if(ans<=d[p])
       	 	{
       	 		ans=d[p];
       	 		vi[i]=p;

       	 	}

       	 }

       	 f=0;


       	 }
       	 else if(f==0)
       	 {
       	 

       	 		 for(ll p=1;p<=m;p++)
       	 {
       	 	if(ans1>=d[p])
       	 	{
       	 		
       	 		ans1=d[p];
       	 		vi[i]=p;

       	 	}

       	 }

       	 f=1;

       	 }

       	



       }

       for(ll i=1;i<=n;i++)
       	cout<<vi[i]<<" ";
       cout<<endl;

    }
return 0;
}
		
