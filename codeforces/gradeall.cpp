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
            
            ll n,h;
            cin>>n>>h;
            vec v(n);
            ll sum=0;
            for(ll i=0;i<n;i++)
            {

            	cin>>v[i];
            	sum=sum+v[i];
            }

            if(h>=sum)
            	cout<<sum<<endl;
            else
            {
            	cout<<h<<endl;
            }


    }
return 0;
}
		
