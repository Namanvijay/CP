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
bool fun(pair<ll,ll> &a,pair<ll,ll> &b)
{
	return a.first>b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
          ll n,k;
          cin>>n;
          cin>>k;
          ll arr[n][k]={0};
          ll arr1[n][k];
          ll i=0;
          ll temp=n;
          while(temp)
          {
          	  string s;
          	  cin>>s;
          	  for(ll j=0;j<s.length();j++)
          	  {
          	  	if(s[j]=='1')
          	  	{
          	  		arr1[i][j]=1;
          	  		if(i==0)
          	  			arr[i][j]=1;
          	  		else
          	  		{
          	  			arr[i][j]=arr[i-1][j]+1;
          	  		}
          	  	 // arr[i][j]=arr[i][j-1]+1;
          	  	}
          	  	else
          	  	{
          	  		arr1[i][j]=0;
          	  		if(i==0)
          	  			arr[i][j]=0;
          	  		else
          	  			arr[i][j]=arr[i-1][j];
          	  	}
          	  }

          	  i++;
          	  temp--;

          }

          vec v(k);
          for(ll i=0;i<k;i++)
          {
          	v[i]=arr[n-1][i];
          	// cout<<v[i]<<" ";


          }
          vector <pair<ll,ll>> vi;
          for(ll i=0;i<k;i++)
          	vi.pb(mp(v[i],i));
          vec va(n,0);
          // cout<<endl;
          ll ans=0;

          sort(vi.begin(),vi.end(),fun);
          // for(ll i=0;i<vi.size();i++)
          // 	cout<<vi[i].first<<" "<<vi[i].second<<endl;
          // // cout<<endl;
          for(ll i=0;i<vi.size();i++)
          {
          	  ll p=vi[i].second;
          	  for(ll j=0;j<n;j++)
          	  {
          	  	  if(arr1[j][p]==1)
          	  	  {
          	  	  	// cout<<"***"<<j<<endl;
          	  	  	va[j]=1;

          	  	  }
          	  	  	

          	  }
          	  ans++;

          	  if(find(va.begin(),va.end(),0)==va.end())
          	  	break;

          }

          cout<<ans<<endl;

        

    }
return 0;
}
		
