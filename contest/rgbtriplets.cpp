//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
/********** code by naman *******/

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
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string si;
    cin>>si;
    vector <char> s(n+1);
    for(ll i=1;i<=n;i++)
    	s[i]=si[i-1];

    map <char,ll> m1;
    map <char,ll> m2;
    for(ll i=1;i<=n;i++)
    	m2[s[i]]++;
    m2[s[1]]--;
    m1[s[1]]++;
    // cout<<s[2]<<endl;
    ll ans=0;
    ll sum=0;
    for(ll i=2;i<=n-1;i++)
    {
    	m1[s[i]]++;
    	m2[s[i]]--;

    	if(s[i]=='R')
    	{
    		ll p=m1['G'];
    		ll q=m1['B'];
    		ll a=m2['G'];
    		ll b=m2['B'];
    		if(p!=0 && b!=0)
    		{
    			// cout<<"&&&"<<p<<" "<<b<<endl;
    			sum=sum+(p*b);
    			for(ll k=1;k<=i-1;k++)
    			{
    				if(s[k]=='G')
    				{
    					ll in=2*i-k;
    					// if(in>n)
    					// 	in=n;
    					if(in<=n)
    					{
    						if(s[in]=='B')
    						sum--;

    					}
    					
    				}
    			}
    		}

    		if(q!=0 && a!=0)
    		{
    			// cout<<"!!!"<<q<<" "<<a<<endl;
    			sum=sum+(q*a);
    			for(ll k=1;k<=i-1;k++)
    			{
    				if(s[k]=='B')
    				{
    					ll in=2*i-k;
    					if(in<=n)
    					{
    						if(s[in]=='G')
    						sum--;
    						// in=n;
    					}
    					
    					// if(in>n)
    						// in=n;
    					// if(s[in]=='G')
    						// sum--;
    				}
    			}

    		}

    	}
    	else if(s[i]=='G')
    	{


    		ll p=m1['R'];
    		ll q=m1['B'];
    		ll a=m2['R'];
    		ll b=m2['B'];
    		if(p!=0 && b!=0)
    		{
    			// cout<<"&&&"<<p<<" "<<b<<endl;
    			sum=sum+(p*b);
    			for(ll k=1;k<=i-1;k++)
    			{
    				if(s[k]=='R')
    				{
    					ll in=2*i-k;
    					if(in<=n)
    					{
    						if(s[in]=='B')
    						sum--;
    						// in=n;
    					}
    					
    				}
    			}
    		}

    		if(q!=0 && a!=0)

    		{
    			// cout<<"!!!"<<q<<" "<<a<<endl;
    		    sum=sum+(q*a);
    			for(ll k=0;k<=i-1;k++)
    			{
    				if(s[k]=='B')
    				{
    					ll in=2*i-k;
    					// if(in>n)
    						// in=n;
    					if(in<=n)
    					{
    						if(s[in]=='R')
    						sum--;

    					}
    					
    				}
    			}

    		}

    	}
    	else if(s[i]=='B')
    	{

    		ll p=m1['R'];
    		ll q=m1['G'];
    		ll a=m2['R'];
    		ll b=m2['G'];
    		if(p!=0 && b!=0)
    		{
    			// cout<<"&&&"<<p<<" "<<b<<endl;
    			sum=sum+(p*b);
    			for(ll k=1;k<=i-1;k++)
    			{
    				if(s[k]=='R')
    				{
    					ll in=2*i-k;
    					// if(in>n)
    						// in=n;
    					if(in<=n)
    					{
    						if(s[in]=='G')
    						sum--;
    				    }

    				}
    					
    			}
    		}

    		if(q!=0 && a!=0)
    		{ 
    			// cout<<"!!!"<<q<<" "<<a<<endl;
    			sum=sum+(q*a);
    			for(ll k=0;k<=i-1;k++)
    			{
    				if(s[k]=='G')
    				{
    					ll in=2*i-k;
    					// if(in>n)
    						// in=n;
    					if(in<=n)
    					{
    						if(s[in]=='R')
    						sum--;

    					}
    					
    				}
    			}

    		}


    	}

    }

    cout<<sum<<endl;

return 0;
}
