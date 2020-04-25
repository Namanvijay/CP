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
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {

    	vector <string> v(10);
    	string s;
    	for(ll i=1;i<=9;i++)
    	{

    		cin>>s;
    		v[i]=s;
    	}

    	// vector <char> vi[10][10];
    	// for(ll i=1;i<=9;i++)
    	// {
    	// 	for(ll j=1;j<=9;j++)
    	// 		vi[i][j]=v[i][j-1];

    	// }

    	// for(ll i=1;i<=9;i++)
    	// {
    	// 	for(ll j=1;j<=9;j++)
    	// 		cout<<vi[i][j];


    	// }
    

    	// cout<<v[1][0]<<endl;
    	// cout<<v[1][1]<<endl;


    	v[1][0]=v[1][1];
    	v[2][3]=v[2][4];
    	v[3][6]=v[3][7];
    	v[4][1]=v[4][2];
    	v[5][4]=v[5][5];
    	v[6][7]=v[6][8];
    	v[7][2]=v[7][3];
    	v[8][5]=v[8][6];
    	v[9][8]=v[9][7];

    	for(ll i=1;i<=9;i++)
    		cout<<v[i]<<endl;


        // cout<<v[0]<<endl;

    	





    }
return 0;
}
		
