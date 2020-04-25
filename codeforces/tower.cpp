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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
           ll n;
           cin>>n;
           vec v(n);
           set <ll> a,b;
           for(ll i=0;i<n;i++)
           {
           	cin>>v[i];
           	  a.insert(-v[i]);
           }

           for(ll i=0;i<n;i++)
           {
           	  ll flg=0;
           	  b.insert(-v[i]);
           	  while(b.size()>0 && (*b.begin()==*a.begin()))
           	  {
           	  	flg=1;
           	  	auto it=a.begin();
           	  	cout<<-1*(*it)<<" ";
           	  	a.erase(a.begin());
           	  	b.erase(b.begin());

           	  	
           	  }
           	  if(flg==1)
           	  	cout<<endl;


           	  else if(flg==0)
           	  	cout<<"NOT POSSIBLE"<<endl;
           }

    }
return 0;
}
		
