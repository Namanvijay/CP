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
    for(ll i=0;i<t;i++)
    {
          ll n;
          cin>>n;
          ll k;
          cin>>k;
          vec va(n);
          va[0]=0;
          va[1]=n-1;
          // ll temp=n-1;
          for(ll i=1;i<n-1;i++)
          {
          	va[i+1]=va[i]+(n-i-1);
          	// temp--;

          }

          // for(ll i=1;i<n;i++)
          // 	cout<<v[i]<<" ";
          // cout<<endl;
          ll p=n*(n-1)/2-k+1;
          // cout<<"^^^"<<p<<endl;
          ll in1,in2;
          if(p<=va[1])
          {

          	  in1=1;
          	  ll diff=p;
          	  in2=in1+p;

          }


          for(ll i=2;i<n;i++)
          {
                      if(p<=va[i] && p>va[i-1])
                      {

                      	  in1=i;
                      	  ll diff=p-va[i-1];
                      	  in2=in1+diff;
                      	  // cout<<"***"<<in1<<" "<<in2<<endl;
                      	  break;

                      }

          }

          vector <char> vi(n+1);
          for(ll i=1;i<=n;i++)
          	vi[i]='a';

          vi[in1]='b';
          vi[in2]='b';

          for(ll i=1;i<=n;i++)
          	cout<<vi[i]<<"";

          cout<<endl;

    }
return 0;
}
		
