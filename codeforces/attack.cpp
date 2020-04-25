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
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,s,k,p,q;
    cin>>a>>s>>k>>p>>q;
     double x,y;
    if(a>=s)
    {
    	
    	ll w=a-s;
    	x=double((q*k-w))/(q+p);
    	// cout<<"%%%"<<x<<endl;
    	y=k-double(x);
    	// cout<<"&&&"<<y<<endl;
    	if(float(x)==int(x) && float(y)==float(y) && x>=0 && y>=0 && x<=k && y<=k)
    		cout<<x<<endl;
    	else
    		cout<<"-1"<<endl;

    	
    }
    else
    {

    	ll w=s-a;
    	// cout<<"!!!"<<w<<endl;
    	x=float((q*k+w))/(q+p);
    	// cout<<"%%%"<<x<<endl;
    	y=k-float(x);
    	// cout<<"&&&"<<y<<endl;
    	if(float(x)==int(x) && float(y)==float(y) && x>=0 && y>=0 && x<=k && y<=k)
    		cout<<x<<endl;

    	// cout<<"####"<<a+(x*p)<<endl;
    	else
    		cout<<"-1"<<endl;

    }

return 0;
}
