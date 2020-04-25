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
#define md 998244353
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
  
     
    else {  
        y = A % C;  
        y = (y * exponentMod(A, B - 1, C) % C) % C;  
    } 
    return (ll)((y + C) % C);  
  
      
}  
ll modinverse(ll a,ll m)
{
	exponentMod(a,m-2,m);
}
struct cases
{
	int a1=0,a2=0,a3=0,a4=0;
};

struct cases cal(struct cases o1,struct cases o2,char ch)
{
	ll f1=o1.a1+o1.a2+o1.a3+o1.a4;
	f1%=md;
	// cout<<"^^^"<<f1<<endl;


	ll f2=o2.a1+o2.a2+o2.a3+o2.a4;
	// cout<<"***"<<f2<<endl;
	f2%=md;
	struct cases res;
	if(ch=='&')
	{
		res.a1=((o1.a1*f2)%md+(o1.a3*o2.a1)%md+(o1.a3*o2.a4)%md+(o1.a4*o2.a3)%md+(o1.a4*o2.a1)%md+(o1.a2*o2.a1)%md)%md;
		res.a2=((o1.a2*o2.a2))%md;
		// res.a1=( (o2.a1*f1)%md + (o1.a1*(((f2-o2.a1)%md+md)%md) )%md + (o1.a3* o2.a4)%md + (o1.a4*o2.a3)%md )%md;
		res.a3=((o1.a3*o2.a2)%md+(o1.a2*o2.a3)%md+(o1.a3*o2.a3)%md)%md;
		res.a4=((o1.a4*o2.a2)%md+(o1.a2*o2.a4)%md+(o1.a4*o2.a4)%md)%md;



	}
	else if(ch=='|')
	{
		res.a1=(o1.a1*o2.a1)%md;
		res.a3= ( (o1.a3*o2.a1)%md +(o1.a1*o2.a3)%md +(o1.a3*o2.a3)%md )%md;
			res.a4= ( (o1.a4*o2.a1)%md +(o1.a1*o2.a4)%md +(o1.a4*o2.a4)%md )%md;
			res.a2=((o2.a2*f1)%md+(o2.a4*(o1.a3+o1.a2))%md+(o2.a3*(o1.a4+o1.a2))%md+(o1.a2*o2.a1)%md)%md;
           // res.a2= ( (o2.a2*f1)%md +(o1.a2*(((f2-o2.a2)%md+md)%md) )%md + (o1.a3* o2.a4)%md + (o1.a4*o2.a3)%md )%md;
	}
	else if(ch=='^')
	{
		res.a1=((o1.a1*o2.a1)%md+(o1.a2*o2.a2)%md+(o1.a3*o2.a3)%md+(o1.a4*o2.a4)%md)%md;
		res.a2=((o1.a1*o2.a2)%md+(o1.a2*o2.a1)%md+(o1.a3*o2.a4)%md+(o1.a4*o2.a3)%md)%md;
		res.a3=((o1.a1*o2.a3)%md+(o1.a3*o2.a1)%md+(o1.a2*o2.a4)%md+(o1.a4*o2.a2)%md)%md;
		res.a4=((o1.a1*o2.a4)%md+(o1.a4*o2.a1)%md+(o1.a2*o2.a3)%md+(o1.a3*o2.a2)%md)%md;
	}

	// cout<<"^^^"<<res.a1<<" "<<res.a2<<" "<<res.a3<<" "<<res.a4<<endl;

	return res;



}
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
       stack <char> op;
       stack  <cases> st;
       ll j=0;
       for(ll i=0;i<s.length();i++)
       {
       	  if(s[i]==' ')
       	  	continue;
       	  else if(s[i]=='(')
       	  {
       	  	op.push(s[i]);
       	  }
       	  else if(s[i]=='#')
       	  {
       	  	 struct cases ob;
       	  	 ob.a1=1;
       	  	 ob.a2=1;
       	  	 ob.a3=1;
       	  	 ob.a4=1;
       	  	 st.push(ob);
       	  }
       	  else if(s[i]==')')

       	  {
       	  	 while(!op.empty() && op.top()!='(')
       	  	 {
       	  	 	struct cases o1=st.top();
       	  	 	st.pop();
       	  	 	struct cases o2=st.top();
       	  	 	st.pop();
       	  	 	char ch=op.top();
       	  	 	op.pop();
       	  	 	st.push(cal(o1,o2,ch));

       	  	 }
       	  	 if(!op.empty())
       	  	 	op.pop();

       	  }
       	  else if(s[i]=='&' || s[i]=='^' || s[i]=='|')
       	  {
       	  	j++;
       	  	op.push(s[i]);
       	  }
       }

       while(!op.empty())
       {
       	       // cout<<"(((("<<endl;
       	       struct cases o1=st.top();
       	  	 	st.pop();
       	  	 	struct cases o2=st.top();
       	  	 	st.pop();
       	  	 	char ch=op.top();
       	  	 	op.pop();
       	  	 	st.push(cal(o1,o2,ch));

       } 

       struct cases ans=st.top();
       // cout<<"!!!"<<ans.a1<<" "<<ans.a2<<" "<<ans.a3<<" "<<ans.a4<<endl;
       // cout<<"###"<<j+1<<endl;
       // cout<<"~~~~"<<exponentMod(4,j+1,md)<<endl;
       cout<<(ans.a1 * modinverse(exponentMod(4,j+1,md),md))%md<<" ";
		cout<<(ans.a2 * modinverse(exponentMod(4,j+1,md),md))%md<<" ";
		cout<<(ans.a3 * modinverse(exponentMod(4,j+1,md),md))%md<<" ";
		cout<<(ans.a4 * modinverse(exponentMod(4,j+1,md),md))%md<<" ";
		cout<<endl;
			

    }
return 0;
}
		
