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
        ll z=1;
    while(t--)
    {
         
         ll n,b;
         cin>>n>>b;
         vec v(n);
         for(ll i=0;i<n;i++)
         	cin>>v[i];
         sort(v.begin(),v.end());
         ll c=0;
         for(ll i=0;i<n;i++)
         {
         	if(v[i]<=b)
         	{
         		b=b-v[i];
         		c++;
         	}
         }
     

         cout<<"Case"<<" "<<"#"<<z<<":"<<" "<<c<<endl;
         z++;

    }
return 0;
}
		
