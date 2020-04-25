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
int main()
{
        ll n;
        cin>>n;
        vec v(n);
          set <ll> s;
        for(ll i=0;i<n;i++)
        {

        	cin>>v[i];
        	
        }
        
        sort(v.begin(),v.end());
        if(v[0]>1 )
        	s.insert(v[0]-1);
        else
        	s.insert(v[0]);
        for(ll i=1;i<n;i++)
        {
        	if(s.find(v[i]-1)==s.end() &&v[i]!=1)
        	{
        		s.insert(v[i]-1);
        	}
        	else if(s.find(v[i])==s.end())
        		s.insert(v[i]);
        	else if(s.find(v[i]+1)==s.end())
        		s.insert(v[i]+1);
        }

        cout<<s.size()<<endl;
      
        
      

return 0;
}
