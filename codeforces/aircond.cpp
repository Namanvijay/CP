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

    	ll n,m;
    	cin>>n>>m;
    	ll t[n],l[n],h[n];
    	for(ll i=0;i<n;i++)
    		cin>>t[i]>>l[i]>>h[i];
    	ll minn=m,maxx=m;
    	ll pre=0;
    	ll flg=0;
    	for(ll i=0;i<n;i++)
    	{
    		ll k=t[i]-pre;
    		ll lo=minn-k;
    		ll hi=maxx+k;
    		if(h[i]<lo || l[i]>hi)
    		{
    			flg=1;
    			break;
    		}

    		minn=max(lo,l[i]);
    		maxx=min(hi,h[i]);
    		pre=t[i];


    	}

    	if(flg==1)
    		cout<<"NO"<<endl;
    	else
    		cout<<"YES"<<endl;
    }
return 0;
}
		
