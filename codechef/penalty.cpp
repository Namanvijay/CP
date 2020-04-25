//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
bool fun(ll a,ll b,ll c,ll d,ll n)
{
	if(n%2==0)
	{
             if((a==n/2 && d==n/2+1) ||(c==n/2 && d==n/2+1)||(a==n/2+1 && d==n/2+1)||((c==n/2+1 && b==n/2+1)))
             	return true;

             return false;

	}
	else
		return false;
	
}
bool fun1(ll a,ll b,ll c,ll d,ll n)
{
	if(n%2!=0)
	{
		if((a==(n+1)/2 && d==(n+1)/2+1) || (c==(n+1/2) && b==(n+1)/2+1) ||(c==(n+1)/2+1 && b==(n+1)/2)||(a==(n+1)/2+1 && d==(n+1)/2))
			return true;
	}
	return false;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll i=0;
		
		ll a=0,b=0,c=0,d=0;
	//	ll si;

		while(i<(2*n-1))
		{
			if(i%2==0)
			{
				if(s[i]=='1')
             	a++;
                else
                	b++;
                 if((a>=n-1 && d==2)|| (c>=n-1 && b==2) || (a==n && c<n-1) || (c==n && a<n-1)|| fun(a,b,c,d,n) ||fun1(a,b,c,d,n))
                 {
                 	//cout<<"&&&"<<endl;
                 	
                 	break;
                 }

			}
			else
			{
				 if(s[i]=='1')
             	c++;
             else
             	d++;
             if((a>=n-1 && d==2)|| (c>=n-1 && b==2)||(a==n && c<n-1) || (c==n && a<n-1) || fun(a,b,c,d,n) || fun1(a,b,c,d,n))
                 {
                 	//si=i+1;
                 	//cout<<"***"<<a<<b<<c<<d<<endl;
                 	break;
                 }
			}
			i++;


             
           

            
             
        }
        //cout<<"((("<<i<<endl;
        cout<<i+1<<endl;
        //cout<<"!!!"<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

	}
}