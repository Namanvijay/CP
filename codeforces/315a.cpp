////code is designed by naman vijay
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    vector <ll> v1;
    vector <ll> v2;
    vector <ll> v3(100005,0);
    ll n,m,k,c=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
    	cin>>m>>k;
    	v1.pb(m);
    	v2.pb(k);
    	v3[v2[i]]+=1;
   

    }
    for(ll i=0;i<n;i++)
    {
    	v3[v2[i]]=v3[v2[i]]-1;
    	if(v3[v1[i]]==0)
    		c++;
    	v3[v2[i]]+=1;



    }
    cout<<c<<endl;

}