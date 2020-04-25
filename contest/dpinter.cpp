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
    ll n=s.length();
    ll arr[n][n]={0};
    ll l=0;
    ll st=1,e=1;
    set <string> si;

    for(ll i=0;i<n;i++)
    {
    	arr[i][i]=1;
        string q=s.substr(i,1);
        // cout<<"***"<<q<<endl;

        si.insert(q);
    }    
    for(ll i=0;i<n-1;i++)
    {
             if(s[i]==s[i+1])
     {

         arr[i][i+1]=1;
         st=i;
         e=i+1;
            string q=s.substr(i,2);
            si.insert(q);
         l=1;
     }

    }


   
    
    

    for(ll k=3;k<=n;k++)
    {
    	for(ll i=0;i<n-1;i++)
    	{
    		ll j=i+k-1;
    		if(s[i]==s[j] && arr[i+1][j-1]==1)
    		{

    			arr[i][j]=1;
                string q=s.substr(i,j+1);
                si.insert(q);
    			ll temp=j-i;
    			if(temp>l)
    			{
    				l=temp;
    				st=i;
    				e=j;
    			}

    		
    			
    		}
    		    
    	}
    }
    // for(ll i=st;i<=e;i++)
    // 	cout<<s[i];
    // cout<<endl;

    for(auto it=si.begin();it!=si.end();it++)
        cout<<*it<<endl;

    // cout<<l+1<<endl;




return 0;
}