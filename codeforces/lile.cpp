
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
         vec v(n+1);
          ll pre[n+1]={0};
         ll sum=0;
         for(ll i=1;i<=n;i++)
         {
         	cin>>v[i];
         	sum=sum+v[i];
         	pre[i]=pre[i-1]+v[i];

         }
         	
         set <ll> s;
         ll arr1[n+1],arr2[n+1];

         for(ll i=1;i<=n;i++)
         {
         	s.insert(v[i]);
         	ll q=s.size();
         	arr1[i]=q;

         }
         s.clear();

         for(ll i=n;i>=0;i--)
         {
         	s.insert(v[i]);
         	ll q=s.size();
         	arr2[i]=q;
         }

         vector <pair <ll,ll>> vi;

         for(ll i=1;i<n;i++)
         {
         	ll x=n-i;
         	ll s1,s2;
         	s1=pre[i];
         	s2=sum-pre[i];
         	if(s1==(i*(i+1)/2) && s2==(x*(x+1)/2) && arr1[i]==i && arr2[i+1]==x)
         		vi.pb(mp(i,x));


         }
         if(vi.size()==0)
         	cout<<"0"<<endl;
         else
         {
         	  cout<<vi.size()<<endl;


         for(ll i=0;i<vi.size();i++)
         	cout<<vi[i].first<<" "<<vi[i].second<<endl;
         }

     }

       
return 0;
}
		
