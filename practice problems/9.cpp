#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,p=0;
    int a[100000];
    cin>>n;
    for(i=0;i<n;i++)
{   
    cin>>a[i];
    if(a[i]<0)
    {
        if(p>0)
        p--;
        else
        count++;
        
        
    }
    else
    p=p+a[i];
}

    cout<<count;
    return 0;
    
}

