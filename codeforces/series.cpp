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
         vec a(n);
         vec vi;
         for(ll i=0;i<n;i++)
         	cin>>a[i];
         ll c=0;
         ll flg=0;
         ll temp;
         ll i=0;

         while(i<n)
         {
         	if(a[i+1]-a[i]!=1)
         		i++;
         	else
         	{
         		c++;
         		for(ll j=i+1;j<n;j++)
         		{
         			if(a[j+1]-a[j]!=1)
         			{
         				i=j+1;
         				break;
         			}

         		}
         	}

         }
         cout<<c<<endl;
    }
return 0;
}
		
