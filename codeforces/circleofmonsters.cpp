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
bool fun(pair<ll,ll>&a,pair<ll,ll>&b)
{
	return a.first<b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
         ll n;
         cin>>n;
         vec a(n+1);
         vec b(n+1);
         ll flg=0;
         for(ll i=1;i<=n;i++)
         	cin>>a[i]>>b[i];

         vec v(n+1);
         ll sum=0;
         ll p=0;
         v[1]=max(p,a[1]-b[n]);
         sum=sum+v[1];
         ll ans=LLONG_MAX;

         for(ll i=2;i<=n;i++)
         {
         	ll q=0;
         	v[i]=max(q,a[i]-b[i-1]);
         	sum=sum+v[i];
         }

         // cout<<"***"<<sum<<endl;

         // for(ll i=1;i<=n;i++)
         // 	cout<<v[i]<<" ";
         // cout<<endl;
         for(ll i=1;i<=n;i++)
         {
         	ans=min(ans,a[i]+sum-v[i]);
         }
         cout<<ans<<endl;


        

         	   	  
         	
         	
    }     	

         	
         
         
    
return 0;
}
		
