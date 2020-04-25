

#include<bits/stdc++.h>
using namespace std;
#define ll long long int



#define endl "\n"
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
        if(n==1)
        {
        	cout<<1<<endl;
        	cout<<1<<" "<<1<<endl;
        }
        else if(n==2)
        {
        	cout<<1<<endl;
        	cout<<2<<" "<<1<<" "<<2<<endl;
        }

        else if(n==3)
        {
        	cout<<1<<endl;
        	cout<<3<<" "<<1<<" "<<" "<<2<<" "<<3<<endl;
        }

        else
        {
        	if(n%2==0)
        	{
        		cout<<n/2<<endl;
        		ll k=1;
        		while(k<n)
        		{
        			cout<<2<<" "<<k<<" "<<k+1<<endl;
        			k=k+2;

        		}
        	}

        	else if(n%2!=0)
        	{
        		cout<<n/2<<endl;
        		cout<<3<<" "<<1<<" "<<2<<" "<<n<<endl;
        		ll k=3;
        		while(k<n)
        		{
        			cout<<2<<" "<<k<<" "<<k+1<<endl;
        			k=k+2; 
        		}
        	}

        }

    }
return 0;
}
		
