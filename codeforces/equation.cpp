//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
vector <bool> v(10000000,true);
ll p=10000000;
void fun()
{
   v[0]=false;
   v[1]=false;

   ll z=sqrt(p);
   for(ll i=1;i<=z;i++)
   {
   	if(v[i])
   	
   		for(ll j=i*i;j<=p;j=j+i)
   			v[j]=false;
   	}	
   	

 }

 int main()
 {
 	fun();
 	ll n,s;
 	cin>>n;
 	ll j=4;
 	while(1)
 	{
         s=n+j;
        if(v[s]==false && v[j]==false)
        	break;
        else
        	j++;
 	}

 	cout<<s<<" "<<j<<endl;
 	return 0;

 }
