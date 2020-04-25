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
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    map <char,vector <ll>> m;
    ll a=-1,b=-1,c=-1,d=-1,co=0;
    for(ll i=0;i<s.length();i++)
    {
             if(s[i]=='[')
             {
             	a=i;
             	break;
             }
    }

    if(a==-1)
    	cout<<-1<<endl;
    else
    {

    	for(ll i=a+1;i<s.length();i++)
    	{
    		if(s[i]==':')
    		{
    			b=i;
    			break;
    		}
    	}

    	if(b==-1)
    		cout<<"-1"<<endl;
    	else
    	{
    		for(ll i=s.length()-1;i>=b+1;i--)
    		{
    			if(s[i]==']')
    			{
    				c=i;
    				break;

    			}
    		}	
    			if(c==-1)
    				cout<<-1<<endl;
    			else
    			{

    				for(ll i=c-1;i>=b+1;i--)
    				{
    					if(s[i]==':')
    					{
    						d=i;
    						break;
    					}

    				}

    				if(d==-1)
    					cout<<-1<<endl;
    				else
    				{

    					for(ll i=b+1;i<d;i++)
    					{
    						if(s[i]=='|')
    							co++;
    					}

    					cout<<4+co<<endl;


    				}
    			}
    		
    	}
    }	
    


return 0;
}
