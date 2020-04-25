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
void add_string(string s,string s2)
{
	// cout<<"((("<<s<<" "<<s2<<endl;
	
	if(s.length()>s2.length())
		swap(s,s2);
	reverse(s.begin(),s.end());
	reverse(s2.begin(),s2.end());
	// cout<<"((("<<s<<" "<<s2<<endl;
	ll n1=s.length();
	ll n2=s2.length();



	string st="";
	ll c=0;
	for(ll i=0;i<n1;i++)
	{
		ll sum=((s[i]-'0')+(s2[i]-'0')+c);
		// cout<<"!!!!"<<sum<<endl;
		st+=(sum%10+'0');
		c=sum/10;
	}
	for(ll i=n1;i<n2;i++)
	{
		ll sum=((s2[i]-'0')+c);
		st+=(sum%10+'0');
		c=sum/10;
	}
	if(c)
		st+=(c+'0');

	reverse(st.begin(),st.end());
	cout<<st<<endl;


	
}
void fun(string s,ll m,ll k)
{
	ll arr[m];
	arr[0]=1%k;
	for(ll i=1;i<m;i++)
	{
		arr[i]=arr[i-1]*(10%k);
		arr[i]=arr[i]%k;
	}

	ll i=0;
	ll j=m-1;
	ll res=0;
	while(i<m)
	{
		if(s[j]=='1')
		{
               res=res+arr[i];
               res=res%k;
		}

		i++;
		j--;
	}
	// cout<<res<<endl;
	ll req=k-res;
	// cout<<"&&&"<<req<<endl;
	string s2;
	while(req)
	{
		ll r=req%10;
		char c=r+'0';
		s2+=c;
		req=req/10;
	}

	reverse(s2.begin(),s2.end());
		// cout<<s2<<endl;

	add_string(s,s2);
}  



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
        string s;
        if(n==0 || n==1 || n==2)
        	cout<<"NOT POSSIBLE"<<endl;
        else
        {
        	s='1';
        	for(ll i=1;i<n;i++)
        		s+='0';
        	// cout<<s<<endl;
        	ll m=s.length();
        	fun(s,m,105);
        }
    }
return 0;
}
		
