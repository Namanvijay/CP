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
ll exponentMod(ll A, ll B, ll C)  
{  
      
    if (A == 0)  
        return 0;  
    if (B == 0)  
        return 1;  
  
     
    ll y;  
    if (B % 2 == 0) {  
        y = exponentMod(A, B / 2, C);  
        y = (y * y) % C;  
    }  
  
    // If B is odd  
    else {  
        y = A % C;  
        y = (y * exponentMod(A, B - 1, C) % C) % C;  
    }  
  
    return y;  
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
          vec v(n);
          for(ll i=0;i<n;i++)
          	cin>>v[i];
          ll flg=0;
          ll count=0;
          for(ll i=0;i<n-1;i++)
          {
          	 ll p=v[i];
          	 ll q=v[i+1];
          	 // cout<<"%%%"<<p<<endl;
          	 // cout<<"***"<<q<<endl;
             for(ll j=0;j<32;j++)
             {
             	ll a=p&1;
             	ll b=q&1;
             	// cout<<"###"<<a<<endl;
             	// cout<<"!!!"<<b<<endl;

             	if(a==1 && b==0)
             	{
             		flg=1;
             		break;
             	}

             	else if(a==1 && b==1)
             	{

             		count++;
// 
             	}

             	p=p>>1;
             	// cout<<p<<endl;
             	q=q>>1;
             	// cout<<q<<endl;
             }

          }

          ll ans=exponentMod(2,count,mod);

          if(flg==1)
          	cout<<0<<endl;
          else
          	cout<<ans<<endl;
    }
return 0;
}
		
