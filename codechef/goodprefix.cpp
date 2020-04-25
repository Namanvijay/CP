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
       string s;
       cin>>s;
       ll k,n;
       cin>>k>>n;
       map <char,ll> m;
       // for(ll i=0;i<s.length();i++)
       // {
       // 	   m[s[i]]++;
       // }

       for(auto it=m.begin();it!=m.end();it++)
       	cout<<it->first<<" "<<it->second<<endl;
       ll temp=k;
       ll ans=0;

       for(ll i=0;i<s.length();i++)
       {
              if(m[s[i]]<n)
              {
                 // cout<<s[i]<<endl;
              	ans++;
              	m[s[i]]++;

              }
              	

              else if(m[s[i]]>=n && temp>0)
              {
                      temp--;
                      // ans++;
                      continue;
              }

              else
              	break;

           

       }

       cout<<ans<<endl;

    }
return 0;
}
		
