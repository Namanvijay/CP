#include <bits/stdc++.h>
// #define ll long long int

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {
   int t=INT_MIN;
   int ans;
   for(int p=l;p<=r;p++)
   {
    // cout<<"^^^"<<p<<endl;
       for(int q=p+1;q<=r;q++)
       {
        // cout<<"***"<<q<<endl;
           ans=p^q;
           // cout<<"((("<<ans<<endl;
           t=max(ans,t);
           // cout<<"!!!"<<ans<<endl;

       }
   }
   return t;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);
    cout<<result<<endl;

    // fout << result << "\n";

    // fout.close();

    return 0;
}
