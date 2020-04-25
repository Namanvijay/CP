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
    for(ll i=0;i<t;i++)
    {
         ll n;
         cin>>n;
         string s;
         string c,d;
         cin>>s;
         c+='1';
         d+='1';
         for(ll i=1;i<s.length();i++)
         {
         	if(s[i]=='0')
         	{
         		c+='0';
         		d+='0';
         	}

         	else if(s[i]=='1')
         	{
         		if(c==d)
         		{
         			c+='1';
         			d+='0';
         		}
         		else if(c>d)
         		{
         			c+='0';
         			d+='1';
         		}
         	}

         	else if(s[i]=='2')
         	{
         		if(c==d)
         		{
         			c+='1';
         			d+='1';
         		}

         		else if(c>d)
         		{
         			c+='0';
         			d+='2';
         		}
         	}
         }

         cout<<c<<endl;
         cout<<d<<endl;

    }
return 0;
}
		
