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
        for(ll i=0;i<n;i++)
        	cin>>v[i];
        map <ll,ll> m;
       vec p(12);
       p[1]=2;
       p[2]=3;
       p[3]=5;p[4]=7;p[5]=11;p[6]=13;p[7]=17;p[8]=19;p[9]=23;p[10]=29;p[11]=31;
       ll ans[n];
       ll c=0;
       vec visi(12,0);
       for(ll i=0;i<n;i++)
       {
       	for(ll j=1;j<=11;j++)
       	{
              if((v[i]%p[j])==0)
              {
              	   // cout<<"$$$"<<v[i]<<endl;
              	   // cout<<"***"<<j<<endl;
              	 	// cout<<"^^"<<c<<" "<<p[j]<<endl;
              	 if(m.find(p[j])==m.end())
              	 {
              	
                    c++;
                    m[p[j]]=c;
              	 }
              	 ans[i]=m[p[j]];
              	 break;
              }

       	}




       }

       // cout<<c<<endl;



       set <ll> s;

       for(ll i=0;i<n;i++)
       	s.insert(ans[i]);

       	 // cout<<ans[i]<<" ";
       	// cout<<endl;
       cout<<s.size()<<endl;

        for(ll i=0;i<n;i++)
       	// s.insert(ans[i]);

       	 cout<<ans[i]<<" ";
       	cout<<endl;

    }
return 0;
}
		
