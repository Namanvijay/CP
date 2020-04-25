//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n,m,flg=0;
	cin>>n>>m;
	vector <ll> v;
	for(ll i=0;i<n;i++)
	{
		ll k;
		cin>>k;
         v.pb(k);

	}


ll temp;
	for(ll i=0;i<n;i++)
	{
		if(v[i]==m)
		{
			flg=1;
			
		}
			

	}
	if(flg==0)
	{
		v.pb(m);
		
	}
		sort(v.begin(),v.end());
		ll med=(1+v.size())/2;
		if(v[med-1]==m)
			if(flg==1)
			cout<<"0"<<endl;
		else
			cout<<"1"<<endl;
		else{



         for(ll i=0;i<v.size();i++)
		{

			//cout<<v[i]<<endl;
			if(v[i]==m){
				temp=i+1;
				break;
		}
			}
				
		//cout<<"***"<<temp<<endl;
		//cout<<"$$$"<<flg<<endl;

		
		
		if(med<temp)
		{
			ll x=2*temp-1;
			if(flg==1)
			cout<<x-v.size()<<endl;
		else
			cout<<x-v.size()+1<<endl;
		}
		else
		{
			ll x=v.size();
			
			while(1)
			{
				if(v[temp-1]==v[temp])
					temp++;
				else
					break;
			}
		

			ll y=med-temp;

			if(flg==1)
			{
				if(x%2==0)
					cout<<2*y<<endl;
				else
					cout<<2*y-1<<endl;
			}
	else
		if(x%2==0)
			cout<<2*y+1<<endl;
		else
			cout<<2*y<<endl;
		}







		}
		

    



		//for(ll i=0;i<v.size();i++)
		//	cout<<v[i]<<" "<<endl; 

return 0;
}