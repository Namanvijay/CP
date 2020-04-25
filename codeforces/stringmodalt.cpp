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

bool fun(pair <string,ll> &a,pair <string,ll> &b)
{
	return a.first<b.first;
}

string leftrota(string s)
{
	// cout<<"****"<<endl;
	string st="";
	for(ll i=0;i<s.length()-1;i++)
	{
		  // cout<<i<<endl;
          st=st+s[i+1];
          // cout<<st[i]<<endl;
	}

	// cout<<")))"<<endl;

	st=st+s[0];
	// cout<<st[s.length()-1]<<endl;

	// cout<<"&&&"<<st[2]<<endl;

	// cout<<st.size();

	
	
	return st;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
           
           ll n;
           ll temp=INT_MAX;
           cin>>n;
           string s;
           cin>>s;
           // string f;
           vector <string> v;
           vector <pair <string,ll>> vi;
           // sort(f.begin(),f.end());
           string sp=s;
           vi.pb(mp(sp,1));

           ll k;

           
            for( k=2;k<n;k++)
            {
            	
                // /cout<<"&&&"<<sp<<endl;
            	sp=leftrota(sp);
            	 // cout<<sp<<endl;

           	  vi.pb(mp(sp,k));




           	  // diff=sp-f;
           	  // ll w;

           	  // if(diff<temp)
           	  // {
           	  	  // string ans=sp;
           	  	  // temp=diff;
           	  	  // w=k;
           	  // }




            }
            reverse(s.begin(),s.end());
            vi.pb(mp(s,n));
            sort(vi.begin(),vi.end(),fun);
            cout<<vi[0].first<<endl;
            cout<<vi[0].second<<endl;

            // cout<<sp<<endl;
            // cout<<k<<endl;
           	  
           
    }
return 0;
}
		
