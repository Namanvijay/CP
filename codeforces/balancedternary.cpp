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
bool fun(pair<ll,ll>&a,pair<ll,ll>&b)
{
	return a.second<b.second;
}
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll p0=0,p1=0,p2=0;
    map <char,vector <ll>> z,t;
    for(ll i=0;i<n;i++)
    {
    	if(s[i]=='0')
    		p0++;
    	else if(s[i]=='1')
    		p1++;
    	else
    		p2++;
    }

    ll req=n/3;
    ll r0=req-p0;
    ll r1=req-p1;
    ll r2=req-p2;
    // cout<<r0 <<r1 <<r2 <<endl;
    ll i=0;
    while(r0>0 && i<n)
    {
    	// cout<<"((("<<endl;
    	ll flg=0;
        if(s[i]=='1' && r1<0)
        {
        	s[i]='0';
        	r0--;
        	r1++;
        	  i++;
        	  flg=1;
        }

        if(s[i]=='2' && r2<0)
        {
        	s[i]='0';
        	r0--;
        	r2++;
        	  i++;
        	  flg=1;
        }
        if(flg==0)
        	i++;
      
    }
     i=n-1;

     while(r2>0 && i>=0)
    {

         // cout<<"%%%%"<<endl;
    	ll flg=0;
    	 if(s[i]=='0' && r0<0)
        {
        	// cout<<"&&&"<<endl;
        	s[i]='2';
        	r2--;
        	r0++;
        	 i--;
        	 flg=1;
        }



         if(s[i]=='1' && r1<0)
        {
        	// cout<<"^^^^"<<endl;
        	s[i]='2';
        	r1++;
        	i--;
        	r2--;
        	flg=1;
        }

        if(flg==0)
        	i--;


       

    }

    if(r1>0)
    {
   
    	// cout<<")))"<<endl;
    	if(r0==0)
    	{
    		// cout<<r0<<r1<<r2<<endl;
    		 i=0;
    		 while(r1!=0 && i<n)
    		{
    			if(s[i]=='2')
    			{
    				s[i]='1';
    				r1--;
    				r2++;
    				
    			}

    			i++;
    		}
    	}

    	
    	// cout<<s<<endl;



    	else if(r2==0)
    	{
    		 i=n-1;
    		while(r1!=0 && i>=0)
    		{
    			if(s[i]=='0')
    			{
    				s[i]='1';
    				r1--;
    				r0++;
    				
    			}
    	       i--;

    		}

    	}

    	else
    	{
    		// cout<<"~~~~"<<endl;
    		for(ll i=0;i<n;i++)
    		{
    			
    			if(s[i]=='0')
    			{
    				z[s[i]].pb(i);
    			}

    			else if(s[i]=='2')
    				t[s[i]].pb(i);

    		}
    		// cout<<r0<<r1<<r2<<endl;
            
            // for(ll i=z['0'].size()-1;i>=0;i--)
            i=z['0'].size()-1;
            // cout<<i<<endl;
            while(r0!=0 && i>=0)
            {
            	// cout<<r0<<r1<<r2<<endl;
            	ll r=z['0'][i];
            	s[r]='1';
            	r0++;
            	r1--;
            	i--;
            }

            // cout<<r0<<r1<<r2<<endl;
            // cout<<"@@@"<<t['2'].size()<<endl;

            // for(ll i=0;i<z['2'].size();i++)
            i=0;
            while(r2!=0 && i<t['2'].size())
            {
            	
            	ll r=t['2'][i];
            	s[r]='1';
            	r2++;
            	r1--;
            	i++;
            }
    	}


     }

    cout<<s<<endl;



return 0;
}
