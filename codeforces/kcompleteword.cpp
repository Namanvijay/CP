//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

/************** Code by naman ******/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
#define endl "\n"
#define im INT_MAX
#define vec vector <ll>
#define mps map <ll,ll> 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      string sp;
      ll arr[k+1][26];
      for(ll i=0;i<k;i++)
      {
      	for(ll j=0;j<26;j++)
      		arr[i][j]=0;

      }
      for(ll i=0;i<n;i++)
      {
      	// for(ll j=0;j<26;j++)
      	// {
      		arr[i%k][s[i]-'a']++;
      	// }

      }

      for(ll i=0;i<k;i++)
      {
      	for(ll j=0;j<26;j++)
      		cout<<arr[i][j]<<" ";
      	cout<<endl;


      }
      ll ans=0;
    

     for(ll i=0;i<k/2;i++)
     {
     	  ll sum=0;
      ll mx=0;
     	for(ll j=0;j<26;j++)
     	{
     		 sum=sum+arr[i][j]+arr[k-i-1][j];
     		 mx=max(mx,arr[i][j]+arr[k-i-1][j]);

     	}

     	cout<<sum<<" "<<mx<<endl;

     	ans=ans+(sum-mx);

     }

     if(k%2==0)
     	cout<<ans<<endl;
     else
     {
     	ll sum=0;
     	ll mx=0;
     	for(ll j=0;j<26;j++)
     	{
     		sum=sum+arr[k/2][j];
     		mx=max(mx,arr[k/2][j]);


     	}
     	ans=ans+sum-mx;
     	cout<<ans<<endl;
     }

     // cout<<ans<<endl;




    }



return 0;
}
		
