#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int arr2[n][m]={0};
    map <int,int> ma;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if((arr[i][j]==1) && (arr[i+1][j]==1) && (arr[i][j+1]==1) && (arr[i+1][j+1]==1))
            {
                arr2[i][j]=1; arr2[i+1][j]=1; arr2[i][j+1]=1; arr2[i+1][j+1]=1;
                ma.insert(pair<int,int>(i+1,j+1));
                
                
                
            }
           
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!=arr2[i][j])
            cout<<"-1"<<endl;
            exit(0);
        }
    }
    map <int,int>::iterator it;
    for(it=ma.begin();it!=ma.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
        
    }
    
    
    return 0;
}