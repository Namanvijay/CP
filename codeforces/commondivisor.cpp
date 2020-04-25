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


vector <ll> v(maxn,0);
void sieve()
{
	
	v[1]=1;
	for(ll i=2;i<maxn;i++)
		v[i]=i;
	for(ll i=4;i<maxn;i+=2)
		v[i]=2;
	for(ll i=3;i<sqrt(maxn);i++)
	{
		if(v[i]==i)
		{
			for(ll j=i*i;j<maxn;j+=i)
			{
				if(v[j]==j)
					v[j]=i;
			}
		}
	}
	// for(ll i=1;i<11;i++)
		// cout<<"!!!"<<v[i]<<endl;


}

set <ll> factors(ll n)
{
	//cout<<"^^^^"<<endl;
	set <ll> v1;
	while(n!=1)
	{ 
		v1.insert(v[n]);
		n=n/v[n];
	}
	return v1;
}

int main()
{
     sieve(); 
      ll n;
      cin>>n;
      vec vi(n);
      for(ll i=0;i<n;i++)
      	cin>>vi[i];
      sort(vi.begin(),vi.end());
      vector <ll> f(maxn+1,0);
      for(ll i=0;i<n;i++)
      {
      	 set <ll> vect=factors(vi[i]);
      	 for(auto it=vect.begin();it!=vect.end();it++)
      	 	cout<<"&&&"<<*it<<" ";
      	 cout<<endl;
      	 // for(ll j=0;j<vect.size();j++)
      	 // {
        //          f[vect[i]]++;
      	 // }
      }
      ll ans=0;

      // for(ll i=0;i<f.size();i++)
      // {
      // 	if(f[i]==n)
      // 		ans++;
      // }
      // ll t=vi[0];
     
      // cout<<ans<<endl;
return 0;
}
