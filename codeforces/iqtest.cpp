//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll mod=pow(10,9)+7;
int main()
{
	char arr[4][4];
	for(ll i=0;i<4;i++)
	{
      for(ll j=0;j<4;j++)
      
      	cin>>arr[i][j];
      
	}

	for(ll i=0;i<3;i++)
	{
        for(ll j=0;j<3;j++)
        {
        	if((arr[i][j]=='.' && arr[i][j+1]=='#'&&arr[i+1][j]=='#'&&arr[i+1][j+1]=='#')||(arr[i][j+1]=='.' && arr[i][j]=='#'&&arr[i+1][j]=='#'&&arr[i+1][j+1]=='#')
        		||(arr[i+1][j]=='.' && arr[i][j+1]=='#'&&arr[i][j]=='#'&&arr[i+1][j+1]=='#')||(arr[i+1][j+1]=='.' && arr[i][j+1]=='#'&&arr[i+1][j]=='#'&&arr[i][j]=='#') ||
        		(arr[i][j]=='#' && arr[i][j+1]=='#'&&arr[i+1][j]=='#'&&arr[i+1][j+1]=='#'))
        	{
        		cout<<"YES"<<endl;
        	     return 0;
        	}
        	  	else if((arr[i][j]=='#' && arr[i][j+1]=='.'&&arr[i+1][j]=='.'&&arr[i+1][j+1]=='.')||(arr[i][j+1]=='#' && arr[i][j]=='.'&&arr[i+1][j]=='.'&&arr[i+1][j+1]=='.')
        		||(arr[i+1][j]=='#' && arr[i][j+1]=='.'&&arr[i][j]=='.'&&arr[i+1][j+1]=='.')||(arr[i+1][j+1]=='#' && arr[i][j+1]=='.'&&arr[i+1][j]=='.'&&arr[i][j]=='.') ||
        		(arr[i][j]=='.' && arr[i][j+1]=='.'&&arr[i+1][j]=='.'&&arr[i+1][j+1]=='.'))
        	  	{
        	  		cout<<"YES"<<endl;
        	  		return 0;
        	  	}
        	  	
        }
	}
	cout<<"NO"<<endl;
	return 0;
}