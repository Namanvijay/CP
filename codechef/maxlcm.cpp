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
vector <bool> v(maxn,true);
   

bool fun(pair <ll,ll> &a,pair <ll,ll> &b)
{
	return a.first>b.first;
if(a.first==b.first)
return a.second<b.second ;   


}


void seive()
{

	
	v[1]=false;
	v[2]=true;
	for(ll i=4;i<maxn;i+=2)
		v[i]=false;
	for(ll i=3;i<sqrt(maxn);i++)
	{
		for(ll j=i*i;j<maxn;j+=i)
			v[j]=false;
	}

	// return vector;


} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;

    cin>>t;
    seive();
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vec vi(n);
          set <ll> s;
          vec p,np;
        for(ll i=0;i<n;i++)
        {

        	cin>>vi[i];
        	s.insert(vi[i]);
        }

        if(s.size()==m)
        	cout<<1<<endl;

        else
        {
        	for(ll i=0;i<n;i++)
        	{
        		if(v[vi[i]]==true)
        			p.pb(vi[i]);
        		else
        			np.pb(vi[i]);
        	}
        	ll r=1;

        	for(ll i=0;i<np.size()-1;i++)
        	{
        		 r= (np[i]*r)/(__gcd(np[i],r));
        	}
        	ll flg=0;

        	// for(ll i=m;i>=1;i--)
        	// {
        	// 	if(v[i]==true && find(p.begin(),p.end(),i)==p.end())
        	// 	{
        	// 		flg=1;
        	// 		cout<<i<<endl;
        	// 		break;
        	// 	}
        	

        	// }

        	// if(flg==0)
        	// {
        		 vector <pair <ll,ll>> vk;
                for(ll i=m;i>=0;i--)
                {
                	if(v[i]==false && find(np.begin(),np.end(),i)==np.end())
                	{
                       ll w=(r*i)/__gcd(r,i);
                       vk.pb(mp(w,i));

                	}

                	else if(v[i]==true && find(p.begin(),p.end(),i)==p.end())
                	{
                		ll w=(r*i)/__gcd(r,i);
                       vk.pb(mp(w,i));

                	}

                }
                // vector <pair <ll,ll>> vk;

                sort(vk.begin(),vk.end(),fun);
                cout<<vk[0].second<<endl;
        	// }


        }
      

    }
return 0;
}
		
