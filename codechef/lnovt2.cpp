//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,l,r;
		ll ans=0;
		ll p=INT_MAX;
		cin>>n;
		vector <ll> v(100,0);
		for(ll i=0;i<n;i++)
		{
			cin>>k;
			ans=max(ans,k);
			p=min(p,k);

			v[k]=1;
		}
		//cout<<ans<<endl;

		for(ll i=1;i<=ans;i++)
		{
            if(v[i])
            {
            	l=i;
            	r=i;
            	while( v[i+1]!=0  && i<ans  )
            	{
            		i++;
            		r++;

            	}

            	if(r>=l+2 && r!=l)
            	{
            		if(l==p && r==ans)
            			cout<<l<<"..."<<r;
            		else if(l==p && r!=ans)
            			cout<<l<<"..."<<r<<",";
            		else if(l!=p && r==ans)
            			cout<<l<<"..."<<r;
            		else if(l!=p && r!=ans)
            			cout<<l<<"..."<<r<<",";

            	}

            		
            	else if(r<=l+1 && l!=r)
            	{
            		if(l==p && r==ans)
            			cout<<l<<","<<r;
            		else if(l==p && r!=ans)
            			cout<<l<<","<<r<<",";
            		else if(l!=p && r==ans)
            			cout<<l<<","<<r;
            		else if(l!=p && r!=ans)
            			cout<<l<<","<<r<<",";
            	}
            		
            	else if(l==r)
            		{
            		      if(l==p && r==ans)
            			cout<<l;
            		else if(l==p && r!=ans)
            			cout<<l<<",";
            		else if(l!=p && r==ans)
            			cout<<l;
            		else if(l!=p && r!=ans)
            			cout<<l<<",";
            	}
            		

            }
		}

		cout<<"\n";
	}
	return 0;
}