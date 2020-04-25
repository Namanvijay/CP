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
        ll n;
        cin>>n;
        vector <pair<ll,ll>> v;
        for(ll i=0;i<n;i++)
        {
        	ll a,b;
        	cin>>a>>b;
        	v.pb(mp(a,b));
        }
        ll flg=0;
        if(n==1)
        {
        	if(v[0].first<v[0].second)
        		cout<<"NO"<<endl;
        	else
        		cout<<"YES"<<endl;

        }
        else
        {
        	 for(ll i=0;i<n-1;i++)
        {
        	ll a=v[i+1].first;
        	ll b=v[i+1].second;
        	ll c=v[i].first;
        	ll d=v[i].second;
        	if((b>a) ||(d>c) )
        	{
        		flg=1;
        		break;
        	}
        	if(a==c && b!=d)
        	{
        		flg=1;
        		break;
        	}
        	else if(c>a)
        	{
        		flg=1;
        		break;
        	}
        	else if(a>c && d>b)
        	{
        		flg=1;
        		break;
        	}
        	else if((b-d)>(a-c))
        	{
        		flg=1;
        		break;
        	}
        }

        if(flg==1)
        	cout<<"NO"<<endl;
        else
        	cout<<"YES"<<endl;

        }

       
    }
return 0;
}
		
