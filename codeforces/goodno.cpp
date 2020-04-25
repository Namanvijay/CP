//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
vector <ll> v;


void fun()

{

         v.pb(0);
		v.pb(1);

       ll temp=1;
        ll i=1;
		while(temp<100000)
		{

                 temp=temp*3;
                // cout<<"!!!"<<temp<<endl;
                 //cout<<"***"<<v.size()<<endl;
                 ll x=v.size();
                 for(ll i=0;i<x;i++)
                 {
                           v.pb(v[i]+temp);
                 }

                // for(ll i=0;i<v.size();i++)
                 	//cout<<v[i]<<" ";
                // cout<<"\n";
                        
                 //s.insert(temp);
                 i++;
		}   

		//for(ll i=0;i<v.size();i++)
		//	cout<<v[i]<<" ";
}
int main()
{
	ll t;
	cin>>t;
	fun();
	while(t--)
	{
		ll n;
		cin>>n;
		auto it=lower_bound(v.begin(),v.end(),n);
		cout<<*it<<endl;
		
    }
      

          
		
	return 0;
}