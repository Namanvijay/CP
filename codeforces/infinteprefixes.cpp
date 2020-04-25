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
		ll n,x,c,e=0,o=0;
		cin>>n>>x;
		string s;
		cin>>s;
		ll v[n];
		//cout<<n<<" "<<x<<endl;
		for(ll i=0;i<n;i++)
		{
			
			v[i]=s[i]-'0';
			//cout<<"%%%"<<v[i]<<endl;
			if(s[i]=='0')
				o++;
			else
				e++;
		}

		
		if(o-e==x)
			cout<<"-1"<<endl;
		else if(x==0)
			cout<<"1"<<endl;
		else if(o>0 && e==0 && x>0)
			cout<<"1"<<endl;
		else if(e>0 && o==0 && x<0)
			cout<<"1"<<endl;
		else if(o>0 && e==0 && x<0)
			cout<<"0"<<endl;
		else if(e>0 && o==0 && x>0)
			cout<<"0"<<endl;
		else if(e>o && x!=0)
		{
			//cout<<"***";
			if(2*o<e)
				cout<<"0"<<endl;
			else if(2*o>e && 2*o-e<x)
				cout<<"0"<<endl;
		}

			else
			{
				ll diff=o-e;
				//cout<<"!!!";
				
				ll z=x%diff;
				if(z==0)
				{
					ll s=x/diff;
					ll ans=1;
					ll o1=o*s,e1=e*s;
					for(ll i=0;i<n;i++)
					{
						
						if(v[i]==0)
							o1++;
						else
							e1++;
						if(o1-e1==x)
							ans++;
					}
				     o1=o*s,e1=e*s;

					for(ll i=n-1;i>=0;i--)
					{
					
						if(v[i]==0)
							o1++;
						else
							e1++;
						if(o1-e1==x)
							ans++;
					}
					cout<<ans<<endl;
				}
				else
				{
					ll ans=0;
                    ll q=x%diff;
                    q=x-q;
                    ll s=q/diff;
                   ll o2=o*s;
                    	ll e2=e*s;
                    	ll temp=-1;
                    for(ll i=0;i<n;i++)
                    {
                    	if(v[i]==0)
                    		o2++;
                    	else
                    		e2++;
                    	if(o2-e2==q)
                    	{
                    		
                    		ans++;
                    	}
                    }	
                    	/*for(ll i=temp;i<n;i++)
                    	{
                    		
                    		
                    		if(v[i]==0)
                    			o2++;
                    		else
                    			e2++;
                    		if(o2-e2==(x-q))
                    			ans++;
                    	}
                    	cout<<ans<<endl;

                    		

                    	
                    }*/

				}

			}
			
		}
		return 0;
	}
		



	
