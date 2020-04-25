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
             ll flg=0;
             for(ll i=0;i<n;i++)
             	cin>>v[i];
             for(ll i=0;i<n-1;i++)
             {

             	if(abs(v[i+1]-v[i])==1)
             		continue;
             	else
             	{
             		if((v[i]==1 && v[i+1]==n) || (v[i]==n && v[i+1]==1 ))
             		{
             			// cout<<"&&&"<<endl;
             			continue;
             		}
             		else
             		{
             			// cout<<"***"<<endl;
             			flg=1;
             			break;
             		}
             	}
             }

             if(flg==1)
             	cout<<"NO"<<endl;
             else
             	cout<<"YES"<<endl;
    }
return 0;
}
		
