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
        vector<char> f,b;
        ll i=0,j=s.length()-1;
        // vector <char> st;
        ll t,r;
              string p="";
        while(i<=j)
        {
        	if(s[i]==s[j]&& i==j)
        	{
        		f.pb(s[i]);
        		i++;
        		j--;
        	}

        	else if(s[i]==s[j] && i!=j)
        	{
        		f.pb(s[i]);
        		b.pb(s[j]);
        		i++;
        		j--;
        		
        	}

        	if(s[i]!=s[j])
        	{
        		t=i;
        		r=j;
        		// cout<<"***"<<t<<" "<<r<<endl;
        		break;
        	}
        }

        if(i>=j)
        {
        	
        	cout<<s<<endl;
        }
  
        else
        {

            // cout<<"((("<<s<<endl;
            ll l=r-t+1;
        	string st=s.substr(t,l);
        	// cout<<"&&&"<<st<<endl;
        	for(ll i=1;i<=l;i++)
        	{
        		string z=st;
        		z=z.erase(0,i);
        		string y=z;
        		reverse(y.begin(),y.end());
        		if(z==y)
        		{
        			p=z;
        			break;

        		}

        		z=st;
        		z=z.erase(l-i,i);
        		y=z;
        		reverse(y.begin(),y.end());
        		if(z==y)
        		{
        			p=z;
        			break;
        		}

        	}

        	for(ll i=0;i<f.size();i++)
        		cout<<f[i];
        	  cout<<p;
        	for(ll i=b.size()-1;i>=0;i--)
        		cout<<b[i];

        	cout<<endl;



        }


        

        
        


    }
return 0;
}
		
