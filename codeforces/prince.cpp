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
        vec pr(n+1,0);
        vec d(n+1,0);
        pr[0]=1;
        d[0]=1;
        for(ll i=0;i<n;i++)
        {
        	ll flg=0;
        	ll q;
        	cin>>q;
        	for(ll j=1;j<=q;j++)
        	{
        		ll a;
        		cin>>a;
        		if(pr[a]==0  && flg==0)
        		{
        			d[i+1]=1;
        			pr[a]=1;
        			flg=1;
        			// break;
        		}

        	}
        	// if(flg==1)
        	// 	break;
        }
        ll flg=0;
        for(ll i=1;i<=n;i++)
        {
        	
        	if(d[i]==0)
        	{
        		for(ll j=1;j<=n;j++)
        		{
        			if(pr[j]==0)
        			{
        				cout<<"IMPROVE"<<endl;
        				cout<<i<<" "<<j<<endl;
        				flg=1;
        				break;
        			}
        		}
        		if(flg==1)
        			break;


        	}
        }

        if(flg==0)
        	cout<<"OPTIMAL"<<endl;
    }
return 0;
}
		
