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
		string a;
		int n,b=0;
		vector <string> v;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
            cin>>a;
            v.pb(a);
		}
		vector <int> v1(10,0);
		for(ll i=0;i<n;i++)
		{
			v1[v[i][0]-'0']=1;
		}

		

		for(ll i=0;i<n;i++)
		{
			for(ll j=i+1;j<n;j++)
			{
				if(v[i]==v[j])
				{
					for(ll k=0;k<10;k++)
					{
						if(!v1[k])
						{
                            v[j][0]=k+'0';
                            v1[k]=1;
                            b++;
                            break;
						}
					}


				}
				else
					continue;
			}
		}
		cout<<b<<endl;

		for(ll i=0;i<n;i++)
			cout<<v[i]<<endl;
	}
	return 0;
}