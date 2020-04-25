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
         ll r;
         vec v(10);
         for(ll i=0;i<10;i++)
         {
         	 r=m*(i+1)%10;
         	// cout<<r<<endl;
         	v[i]=r;
         }
         // cout<<v[3];
         ll sum=0;
         for(ll i=0;i<10;i++)
         {
            sum=sum+v[i];
         }
         if(m>n)
            cout<<0<<endl;
        else
        {
            ll q=n/m;
            ll p=q/10;
            ll rem=q%10;
            sum=sum*p;
            for(ll i=0;i<rem;i++)
                sum=sum+v[i];
            cout<<sum<<endl;

        }

         	// cout<<v[i]<<" ";
    }
return 0;
}
		
