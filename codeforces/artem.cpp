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
         if(n%2!=0 && m%2!=0)
         {
         	ll flg=0;
         	for(ll i=0;i<n;i++)
         	{
         		for(ll j=0;j<m;j++)
         		{
         			if(flg==0)
         			{
         					cout<<"B";
         					flg=1;

         			}
         			else
         			{
         				cout<<"W";
         				flg=0;
         			}

         		
         		}
         		cout<<endl;
         	}
         }

         else
         {
         	// ll flg=0;
         	char arr[n][m];
         	for(ll i=0;i<n;i++)
         	{
         		if(i%2==0)
         		{
         			ll flg=0;
         			for(ll j=0;j<m;j++)
         		{
         			if(flg==0)
         			{
         				arr[i][j]='B';
         				flg=1;

         			}
         			else
         			{
         				arr[i][j]='W';
         				flg=0;
         			}
         			
         		}
         	}
         		else
         		{
         			ll flg=1;
         				for(ll j=0;j<m;j++)
         		{
         			if(flg==0)
         			{
         				arr[i][j]='B';
         				flg=1;

         			}
         			else
         			{
         				arr[i][j]='W';
         				flg=0;
         			}
         			
         		}

         		}

         		
         		
         	}

         	arr[n-1][m-2]='B';
         	arr[n-1][m-1]='B';

         	for(ll i=0;i<n;i++)
         	{
         		for(ll j=0;j<m;j++)
         			cout<<arr[i][j];
         		cout<<endl;
         	}



         }
    }
return 0;
}
		
