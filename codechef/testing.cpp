#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,flag=0;
        cin >> n;
        int a[n],index[n],feet=1;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                index[j] = i;
                cout << j << "  ";
                j++;
            }
        }
        for(int i=0;i<j;i++)
        {
            cout << index[i] << "  ";
            if((index[i+1]-index[i])<5)
            {
                cout << "NO" << endl;
                exit(0);
            }
        }
        cout << "YES" << endl;
    }
}