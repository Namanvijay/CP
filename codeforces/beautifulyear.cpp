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
    set <ll> s;
    ll n;
    cin>>n;
    ll r=1;
    ll temp;
    while(1)
    {
         n=n+1;
         // cout<<"$$$"<<n<<endl;
         temp=n;
         while(temp>0)
         {
         	ll rem=temp%10;
         	// cout<<"&&&"<<rem;
         	s.insert(rem);
         	temp=temp/10;
         	// cout<<"!!!"<<n<<endl;
         }
         // cout<<"&&&"<<n<<endl;

         if(s.size()==4)
         {
         	break;
         }

          else
         	 s.clear();
         r++;
         	
    }

    // cout<<r<<endl;

    // for(auto it=s.begin();it!=s.end();it++)
    	// cout<<*it;
    cout<<n<<endl;
    // cout<<endl;

return 0;
}
