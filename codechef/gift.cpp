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
         string s;
         cin>>s;
         ll x=0,y=0;
         if(s[0]=='L')
         {
         	x=x-1;

         }
         else if(s[0]=='R')
         	x=x+1;
          else if(s[0]=='U')
         	y=y+1;
          else if(s[0]=='D')
         	y=y-1;

         for(ll i=1;i<n;i++)
         {
         	if(s[i-1]=='L' && (s[i]=='U' || 'D'))
         	{
         		if(s[i]=='U')
         			y=y+1;
         		else if(s[i]=='D')
         			y=y-1;
         		// cout<<x<<" "<<y<<endl;
         	}

         	 else if(s[i-1]=='R' && (s[i]=='U' || 'D'))
         	{
         		if(s[i]=='U')
         			y=y+1;
         		else if(s[i]=='D')
         			y=y-1;
         		// cout<<x<<" "<<y<<endl;
         	}

         	else if(s[i-1]=='U' && (s[i]=='L' || 'R'))
         	{
         		if(s[i]=='L')
         			x=x-1;
         		else if(s[i]=='R')
         			x=x+1;
         		// cout<<x<<" "<<y<<endl;
         		

         	}

         	else if(s[i-1]=='D' && (s[i]=='L' || 'R'))
         	{
         		if(s[i]=='L')
         			x=x-1;
         		else if(s[i]=='R')
         			x=x+1;
         		// cout<<x<<" "<<y<<endl;
         	}



         }

         cout<<x<<" "<<y<<endl;
    }
return 0;
}
		
