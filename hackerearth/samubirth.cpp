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
ll fun(ll n)
{
	ll count=0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	// cout<<"^^^"<<count;
	return count;
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
         cin>>n>>k;
            vector <ll> v(n,0);
            ll temp=n;
             ll i=0;
            while(temp--)
            {
            	 string s;
                 cin>>s;

                 for(ll j=s.length()-1;j>=0;j--)
                 {
                 	if(s[j]=='1')
                 	{
                 		
                 		v[i]=v[i]+(1<<(k-j-1));
                 		// cout<<"((("<<(1<<(k-j-1))<<endl;
                 		// cout<<"***"<<v[i]<<" ";


                 	}
                 	
                 }
                 // cout<<endl;

                 i++;

            }

            // for(ll i=0;i<n;i++)

            	// cout<<v[i]<<" ";
            ll ans=10;
            // int __builtin_popcount(int N);

            for(ll i=0;i<=1023;i++)
            {
            	ll flg=0;
            	 for(ll j=0;j<n;j++)
            	 {
            	 	if((i&v[j])==0)
            	 	{
            	 		flg=1;
            	 		break;
            	 	}
            	 }

            	 if(flg==0)
            	 {
            	 	// ans=min(ans,fun(i));
            	 	ans=min(ans,fun(i));
            	 	// cout<<"^^^"<<i<<endl;

            	 }
            	 	
            }

            cout<<ans<<endl;

        
    }
return 0;
}
		
