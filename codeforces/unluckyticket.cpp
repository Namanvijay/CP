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
     ll n,flg=0;
     cin>>n;

     string s;
     vector <char> s1(n),s2(n);
     cin>>s;
     for(ll i=0;i<n;i++)
     {
     	s1[i]=s[i];
     	// cout<<"((("<<s1[i]<<" ";
     }
     	
     for(ll i=0;i<n;i++)
     {
     	s2[i]=s[n+i];
// cout<<"!!!"<<s2[i]<<" ";


     }
     // cout<<endl;
     	
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
     ll a1=0,a2=0;
     for(ll i=0;i<n;i++)
     {
               if(s1[i]>s2[i])
               	a1++;
               else if(s1[i]<s2[i])
               	a2++;
               else if(s1[i]==s2[i])
               {
               	flg==1;
               	break;
               }

     }
     // cout<<"^^^"<<s2[0]<<endl;
     // for(ll i=0;i<n;i++)
     // {
     	// cout<<"&&&"<<s1[i]<<endl;
     	 // cout<<"***"<<s2[i]<<endl;

     // }
     // cout<<"&&"<<s1<<endl;
    

     if(flg==0)
     {
     	 if(a1==n && a2==0)
     	cout<<"YES"<<endl;
     else if(a1==0 && a2==n)
     	cout<<"YES"<<endl;
     else
     	cout<<"NO"<<endl;

     }
     else
     	cout<<"NO"<<endl;
    
     
return 0;
}
