//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
/********** code by naman *******/

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

bool fun(pair <ll,ll> &a,pair <ll,ll> &b)
{
	return a.first<b.first;
}
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    vector <pair <ll,ll>>vi;
    for(ll i=0;i<n;i++)
    {
    	vi.pb(mp(v[i],i));
    }

    sort(vi.begin(),vi.end(),fun);
    string s;


   ll i=0;
   ll j=n-1;
   ll t=min(v[i],v[n-1]);
   if(t==v[i])
   {
   	s+='L';
   	i++;
   }
   	
   else
   {
   	s+='R';
   	j--;
   }
   	

    while(i<=j)
    {
             ll p=min(v[i],v[j]);
             ll q=max(v[i],v[j]);
             {
             	if(p>t)
             	{
             		if(v[i]>v[j])
             		{
             			s+='R';
             			t=v[j];
             			j--;

             		}
             		else
             		{
                        s+='L';
                        t=v[i];
                        i++;
             		}
             	}

             	
             	else if(t>q)
             		break;

             	else if(t>p && t<q)
             	{
             		if(v[i]!=p)
             		{
             			s+='L';
             			t=v[i];
             			i++;
             		}
             		else if(v[j]!=p)
             		{
             			s+='R';
             			t=v[j];
             			j--;
             		}

             	}

             }
             // ll q=max(v[i],v[j]);

             

    }
    ll k=s.size();
    cout<<k<<endl;

    cout<<s<<endl;

return 0;
}
