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
        //ll arr[n];
        string s;
        ll a=0,b=0,c=0,d=0;
        // for(ll i=0;i<2*n-1;i++)
        	// cin>>arr[i];
        ll temp=2*n;
        cin>>s;
        for(ll i=0;i<2*n;i++)
        {
        	if(i%2==0)
        	{
        		if(s[i]=='1')
        		
        			a++;
        		else
        			b++;

        		//cout<<"!!!"<<a<<" "<<b<<endl;
        		
        	}
        	else
        	{
        		if(s[i]=='1')
        			c++;
        		else
        			d++;
        		//cout<<"****"<<c<<" "<<d<<endl;
        		
        	}


        	if(a+d==n+1 || b+c==n+1)
        	{
        		temp=i+1;
        		break;
        	}

        }
        cout<<temp<<endl;

    }
return 0;
}
		
