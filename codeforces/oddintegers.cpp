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
         
         ll n,k;
         cin>>n>>k;
         if(n%2==0 && k%2==0)
         {
         	ll q=k*k;
         	if(n>=q)
         		cout<<"YES"<<endl;
         	else
         		cout<<"NO"<<endl;
         }
         	// cout<<"YES"<<endl;
         else if(n%2!=0 && k%2!=0)
         {
         	ll q=k*k;
         	if(n>=q)
         		cout<<"YES"<<endl;
         	else
         		cout<<"NO"<<endl;

         }
         	// cout<<"YES"<<endl;
         else
         	cout<<"NO"<<endl;
    }
return 0;
}
		
