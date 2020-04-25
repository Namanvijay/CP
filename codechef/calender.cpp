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
    ll t;
    cin>>t;
    while(t--)
    {
           ll m1,y1;
           ll m2,y2;
           cin>>m1>>y1;
           cin>>m2>>y2;
           vec arr(400,0);
            arr[2]=1;
        arr[8]=1;
        arr[13]=1;
        arr[14]=1;
        arr[19]=1;
        arr[24]=1;
        arr[25]=1;
        arr[30]=1;
        arr[36]=1;
        arr[41]=1;
        arr[42]=1;
        arr[47]=1;
        arr[52]=1;
        arr[53]=1;
        arr[58]=1;
        arr[64]=1;
        arr[69]=1;
        arr[70]=1;
        arr[75]=1;
        arr[80]=1;
        arr[81]=1;
        arr[86]=1;
        arr[92]=1;
        arr[97]=1;
        arr[98]=1;
        arr[104]=1;
        arr[109]=1;
        arr[110]=1;
        arr[115]=1;
        arr[120]=1;
        arr[121]=1;
        arr[126]=1;
        arr[132]=1;
        arr[137]=1;
        arr[138]=1;
        arr[143]=1;
        arr[148]=1;
        arr[149]=1;
        arr[154]=1;
        arr[160]=1;
        arr[165]=1;
        arr[166]=1;
        arr[171]=1;
        arr[176]=1;
        arr[177]=1;
        arr[182]=1;
        arr[188]=1;
        arr[193]=1;
        arr[194]=1;
        arr[199]=1;
        arr[200]=1;
        arr[205]=1;
        arr[206]=1;
        arr[211]=1;
        arr[216]=1;
        arr[217]=1;
        arr[222]=1;
        arr[228]=1;
        arr[233]=1;
        arr[234]=1;
        arr[239]=1;
        arr[244]=1;
        arr[245]=1;
        arr[250]=1;
        arr[256]=1;
        arr[261]=1;
        arr[262]=1;
        arr[267]=1;
        arr[272]=1;
        arr[273]=1;
        arr[278]=1;
        arr[284]=1;
        arr[289]=1;
        arr[290]=1;
        arr[295]=1;
        arr[301]=1;
        arr[302]=1;
        arr[307]=1;
        arr[312]=1;
        arr[313]=1;
        arr[318]=1;
        arr[324]=1;
        arr[329]=1;
        arr[330]=1;
        arr[335]=1;
        arr[340]=1;
        arr[341]=1;
        arr[346]=1;
        arr[352]=1;
        arr[357]=1;
        arr[358]=1;
        arr[363]=1;
        arr[368]=1;
        arr[369]=1;
        arr[374]=1;
        arr[380]=1;
        arr[385]=1;
        arr[386]=1;
        arr[391]=1;
        arr[396]=1;
        arr[397]=1;
        vec b(400,0);


        for(ll i=0;i<400;i++)
        	b[i]=arr[i-1];
        b[0]=0;
        // cout<<b[0]<<endl;
        ll c=0;
        for(ll i=0;i<400;i++)
        {
        	if(b[i]==1)
        		c++;
        	// cout<<i<<" "<<b[i]<<endl;
        }
        if(m1>2)
        	y1=y1+1;
        if(m2<2)
        	y2=y2-1;
        ll div=(y2-y1)/400;
        ll rem=(y2-y1)%400;
        ll p=y1%400;
        ll q=y2%400;
        ll ans=div*c;
        if(y2-y1==q-p)
        {
              ll sum=0;
              for(ll i=p;i<=q;i++)
              	sum=sum+b[i];
              cout<<sum<<endl;
        }
        else
        {
        	ll sum=0;
             for(ll i=p;i<400;i++)
             {
             	sum=sum+b[i];
             }
             for(ll i=0;i<=q;i++)
             	sum=sum+b[i];
             ll count=400-p+q+1;
             ll z=((y2-y1-count+1)/400);
             sum=sum+z*c;
             cout<<sum<<endl;
        }


		

    }
return 0;
}
		
