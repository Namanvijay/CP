#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> dp;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    // cout<<"***"<<x<<endl;
    auto it = lower_bound(dp.begin(), dp.end(), x);
    if (it == dp.end()) {
      // cout<<*it<<endl;
      // cout<<"((("<<endl;
      // cout<<x<<endl;
      dp.push_back(x);
      // for(int i=0;i<dp.size();i++)
        // cout<<dp[i]<<" ";
      // cout<<endl;
    } else {
      // cout<<*it<<endl;
      *it = x;
    }
  }
  // for(int i=0;i<dp.size();i++)
    // cout<<dp[i]<<" ";
  // cout<<endl;
  cout << dp.size() << endl;
}