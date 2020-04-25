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
         ll n,m,x,y;
         cin>>n>>m>>x>>y;
         ll r=n*x;
         ll q=m*y;
         ll ans=r+q;
         ll flg=0;
         cout<<ans<<" "<<r<<" "<<q<<" "<<endl;
         ll temp=ans;
         for(ll i=0;i<=n;i++)
         {
         	for(ll j=0;j<=m;j++)
         	{
         		if(ans%2==0 && i*x+j*y==ans/2)
         		{

         			cout<<"YES"<<endl;
         			flg=1;
         			break;
         		}



         	}

         	if(flg==1)
         			break;
         }

         if(flg==0)
         	cout<<"NO"<<endl;


         
        

    }
return 0;
}
		
