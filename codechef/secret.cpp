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
         ll n=s.length();
         if(s[0]=='0')
            cout<<"YES"<<endl;
        else
        {
            if(n==1)
            cout<<"NO"<<endl;
        else if(n>=2 && (s[0]=='1') || (s[0]=='2' && s[1]<'7'))
        {
            ll count[n];
            count[0]=1;
            if(s[1]=='0')
            count[1]=1;
           else
            count[1]=2;
            for(ll i=2;i<n;i++)
            {
                count[i]=0;
                if(s[i]!='0')
                    count[i]=count[i-1];

                if(s[i-1]=='1' ||(s[i-1]=='2' && s[i]<'7'))
                {
                    count[i]=count[i]+count[i-2];
                }


            }

            if(count[n-1]%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }

        else
        {
            ll count[n];
            count[0]=1;
            count[1]=1;
            for(ll i=2;i<n;i++)
            {
                count[i]=0;


                if(s[i]!='0')
                    count[i]=count[i-1];

                if(s[i-1]=='1' ||(s[i-1]=='2' && s[i]<'7'))
                {
                    count[i]=count[i]+count[i-2];
                }

            }

             if(count[n-1]%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }

        } 
    }
return 0;
}
        
