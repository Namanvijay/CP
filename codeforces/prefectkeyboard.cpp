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
    ll t;
    cin>>t;
    	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(t--)
    {
    
    string s;
    cin>>s;
    ll n=s.length();
    ll flg=0;
    ll x=0,y=0;
    vector <ll> vi(26,0);
    // for(ll i=0;i<n;i++)
    	// v[s[i]-'a']=1;
    map <char,set <char>> m;
    m[s[0]].insert(s[1]);
    for(ll i=1;i<n-1;i++)
    {
    	char p=s[i-1];
    	char q=s[i+1];
    	if(p!=q)
    	{
    		
    		m[s[i]].insert(p);

    	 

    		m[s[i]].insert(q);

    	}
    	else if(p==q)

    		
    			m[s[i]].insert(p);
    }
    char ch;


    m[s[n-1]].insert(s[n-2]);
    for(ll i=0;i<26;i++)

    {
    	if(m['a'+i].size()>2)
    	{
    		flg=1;
    		break;
    	}
    	else
    	{

    		if(m['a'+i].size()==1)
    		{
    			x++;
    			ch='a'+i;
    		}
    		else if(m['a'+i].size()==2)
    			y++;
    	}

    }

    // ll si=x+y;

    if(x==0 || x>2 || flg==1)
    	cout<<"NO"<<endl;
    else
    {
    	string res;
    	char ch;
    	ll in;
    	for(ll i=0;i<n;i++)
    	{
    		if(m[s[i]].size()==1)
    		{
    			ch=s[i];
    			in=i;
    			break;
    		}
    	}

    	res+=ch;
    	vi[ch-'a']=1;
    	for(ll i=in+1;i<n;i++)
    	{
    		if(vi[s[i]-'a']==0)
    		{
    			res+=s[i];
    			vi[s[i]-'a']=1;
    		}
    	}

    	for(ll i=0;i<26;i++)
    	{
    		if(vi[i]==0)
    		{
    			char p='a'+i;
    			res+=p;
    		}
    	}
    	cout<<"YES"<<endl;
    	cout<<res<<endl;


    	


    



    	
    	
    	
    }

    }
    

    


return 0;
}
