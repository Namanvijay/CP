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
             
             // ll t;
             ll n;
             cin>>n;
             string s,ans;
             ll temp=1;
             
             cin>>s;
             string sp=s;
             // ll temp;
             for(ll k=1;k<=n;k++)
             {
                string s1;
                ll c=0;
                for(ll i=k-1;i<n;i++)
                {
                  s1=s1+s[i];
                  c++;
                }
                // cout<<s1<<endl;
                // cout<<c<<endl;
                if(c%2==0)
                {
                   for(ll i=0;i<=k-2;i++)
                    s1=s1+s[i];
                }


                else
                {
                  for(ll i=k-2;i>=0;i--)
                    s1=s1+s[i];
                }

                // cout<<s1<<endl;

                if(sp>s1)
                {
                   // if(sp==s1)
                    // temp=min(temp,k);
                  sp=s1;
                  temp=k;

                  // sp=s1;
                }
             }

             cout<<sp<<endl;
             cout<<temp<<endl;
    }
return 0;
}
    
