//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
 
 // COMPILE BY:) NAMAN 
 
 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 #define pb push_back
 #define mp make_pair
 #define mod 1000000007
 #define maxn 10000001
 #define endl "\n"
 #define inf INT_MAX
 #define vec vector <ll>
 #define mps map <ll,ll> 
 #define ppl vector<pair<ll,ll>> 
 #define fi first
 #define si second
 #define pr pair<ll,ll> 
 #define mvec map<ll,vector <ll>>
 #define all(v) v.begin(),v.end()
 #define infi LLONG_MAX
 #define pi 3.141592653
 #define memset(a,b) memset(a,(b),sizeof(a))
  
 int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll t;
     cin>>t;
     while(t--)
     {
     	ll n,q;
     	cin>>n>>q;
     	ll a[q],b[q];
     	ll ans=0;
     	for(ll i=0;i<q;i++)
     		cin>>a[i]>>b[i];
     	ans=ans+abs(a[0]-0);
     	ans+=abs(a[0]-b[0]);
     	for(ll i=1;i<q;i++)
     	{
     		ans+=abs(a[i]-b[i-1]);
     		ans+=abs(b[i]-a[i]);
     	}
     	cout<<ans<<endl;
 
     }
 return 0;
 }
 		
  