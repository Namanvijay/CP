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

ll fun(ll x)
{
       ll r=x%8;
        if(r==2 || r==3)
        	return 2;
        else if(r==6 || r==7)
        	return 0;
        else if(r==0 || r==1)
        	return x;
        else if(r==4 || r==5)
        	return x+2;
}
int main()
{
    ll t;
    cin>>t;
   
    while(t--)
    {
          ll l,r;
          cin>>l>>r;
          // vec v(maxn,0);
         
           ll p=fun(r);
           ll q=fun(l-1);
           // cout<<"###"<<q<<endl;
           cout<<(p^q)<<endl;
    }
return 0;
}
		
