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
        vec a(n),b(n);
        for(ll i=0;i<n;i++)
        	cin>>a[i];
        for(ll i=0;i<n;i++)
        	cin>>b[i];
        if(a[0]!=b[0])
        	cout<<"NO"<<endl;
        else
        {
        	ll flg=0;
        	set <ll> s;
        	s.insert(a[0]);
        	for(ll i=1;i<n;i++)
        	{
        		if(a[i]==b[i])
        		{
        			s.insert(a[i]);
        			// continue;
        		}
        		else 
        		{
        			if(a[i]>b[i])
        			{
        				if(s.find(-1)==s.end())
        				{
        					// cout<<"NO"<<endl;
        					flg=1;
        					break;
        				}
        				else
        				{
        					s.insert(a[i]);
        					// continue;
        				}

        			}
        			else if(a[i]<b[i])
        			{
        				if(s.find(1)==s.end())
        				{
        					flg=1;
        					break;
        				}
        				else
        				{
        					s.insert(a[i]);
        				}
        			}
        		}
        	}
        	// for(auto it=s.begin();it!=s.end();it++)
        	// 	cout<<*it<<endl;

        	  if(flg==0)
        	cout<<"YES"<<endl;
        else
        	cout<<"NO"<<endl;

        }
      
    }
return 0;
}
		
