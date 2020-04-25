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
    ll t;
    cin>>t;
    while(t--)
    {
           
           ll n;
           cin>>n;
           vec v(n);
           vec v1(n);
           for(ll i=0;i<n;i++)
           	cin>>v[i];
           for(ll i=0;i<n;i++)
           	cin>>v1[i];

           sort(v.begin(),v.end());
           sort(v1.begin(),v1.end());

           for(ll i=0;i<n;i++)
           	cout<<v[i]<<" ";
           cout<<endl;
           for(ll i=0;i<n;i++)
           	cout<<v1[i]<<" ";
           cout<<endl;
    }
return 0;
}
		
