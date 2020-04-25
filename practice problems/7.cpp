#include <bits/stdc++.h>
using namespace std;
int main()
{
    string key,s2;
    cin>>key,s2;
    int arr1[16][16],arr2[16][16],arr3[16][16],arr4[16][16],arr5[16][16];
    int k=0;
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            arr1[i][j]=k;
            k++;
        }
    }
    stringstream s(key);
    vector <int> v;
    for(int i;s>>i;)
    {
        v.push_back(i);
        if(s.peek()==',')
        s.ignore();
    }
    int a=0;
    for(int i=0;i<16;i++)
    {
        
        for(int j=0;j<16;j++)
        {
            
            if(a>=v.size())
            a=0;
            arr2[i][j]=v[a];
            a++;
        }
    }
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            arr3[i][j]=arr1[i][j]^arr2[i][j];
        }
    }
    int b=0;
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            if(s2[b]=='\0')
            {
                b=0;
            }
            arr4[i][j]=int(s2[b]);
            b++;
        }
    }
    int c=0;
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            arr5[i][j]=arr3[i][j]^arr4[i][j];
            if(c<v.size())
            {
                cout<<char(arr5[i][j]);
                c++;
            }
            
        }
    }
    return 0;
    
    
    
    
    
    
    
    
}