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
         vec v(4*n);
         for(ll i=0;i<4*n;i++)
         	cin>>v[i];

         sort(v.begin(),v.end());
         reverse(v.begin(),v.end());

        
        ll i=0;
         ll flg=0;
        vec vi;
        while(i<=2*n-1)
        {
        	if((v[i]==v[i+1])&& (v[4*n-i-1]==v[4*n-i-2]))
        	{
        		vi.pb(v[i]*v[4*n-i-1]);
        		i=i+2;
        	}

        	else
        	{
        		// cout<<"((("<<endl;
        		flg=1;
        		break;
        	}

        }


        if(flg==1)
        {
        	// cout<<"%%%"<<endl;
        	cout<<"NO"<<endl;
        }
        else
        {
        	for(ll i=0;i<vi.size()-1;i++)
        	{
        		if(vi[i]==vi[i+1])
        			continue;
        		else
        		{
        			flg=1;
        			cout<<"NO"<<endl;
        			break;
        		}
        	}
        	// cout<<"!!!"<<flg<<endl;
        	if(flg==0)
        	cout<<"YES"<<endl;
        }

        
    }
return 0;
}
		
