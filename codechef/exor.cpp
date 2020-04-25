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

bool fun(int n) 
{ 
   if(n==0) 
   return false; 
   if(ceil(log2(n)) == floor(log2(n)))
   	return true;
   else
  
   return false ; 
}



int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
              ll n,q;
              cin>>n>>q;
              vec v(n);
              ll e=0,od=0;
              for(ll i=0;i<n;i++)
              {
              	 	cin>>v[i];
              	 	if(fun(v[i]))
              	 		e++;
              	 	else
              	 		od++;

              }
             
              while(q--)
              {
                     ll p;
                     ll odd,even;
                     cin>>p;
                     if(fun(p))
                     	cout<<e<<" "<<od<<endl;
                     else
                     	cout<<od<<" "<<e<<endl;

                     // cout<<od<<" "<<e<<endl;
                     // if(p%2==0)
                     // {
                     // 	even=od;
                     // 	odd=e;
                     // }
                     // else
                     // {
                     // 	even=od;
                     // 	odd=e;
                     // }

                     // cout<<even<<" "<<odd<<endl;
              }

    }
return 0;
}
		
