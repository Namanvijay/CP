#include<bits/stdc++.h>
#define mp(a,b) make_pair(a,b)
#define pb push_back
#define ppb pop_back
using namespace std;
typedef long long int ll;
int  main(){
	ll t;
	cin>>t;
	ll c=0;
	while(t--){
		c++;
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		ll l=1,r=INT_MAX;
		ll ans=-1;
		while(l<=r){
			ll mid=(l+r)>>1;
			ll c=0;
			// cout<<l<<" "<<r<<" "<<mid<<endl;
			for(int i=1;i<n;i++){
				ll d=(v[i]-v[i-1]+mid-1)/(mid);
				c+=d-1;
			}
			if(c<=k){
				ans=mid;
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
		cout<<"Case #"<<c<<": "<<ans<<endl;
	}
}