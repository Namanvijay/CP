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
              if(n<=250000)
              	cout<<n<<endl;
              else if(n>=250001 && n<=500000)
              	cout<<n-(n*5/100)<<endl;
                else if(n>=500001 && n<=750000)
                	cout<<n-(n*10/100)<<endl;
                  else if(n>=750001 && n<=1000000)
                  	cout<<n-(n*15/100)<<endl;
                    else if(n>=1000001 && n<=1250000)
                    	cout<<n-(n*20/100)<<endl;
                      else if(n>=1250001 && n<=1500000)
                      	cout<<n-(n*25/100)<<endl;
                        else if(n>=1500000)
                        	cout<<n-(n*30/100)<<endl;
    }
return 0;
}
		

