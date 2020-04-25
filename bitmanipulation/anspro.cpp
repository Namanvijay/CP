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
         ll a,b;
         cin>>a>>b;
         ll ans=a;
         ll t=a+1;
         ll i=1;
         while(t<b)
         {
         	// a++;
         	ans=ans&t;
         	// cout<<"^^^"<<ans<<endl;
         	t=a+pow(2,i);
         	cout<<"!!!"<<t<<endl;
         	i++;
         }

         cout<<ans<<endl;
    }
return 0;
}
		
