#include "bits/stdc++.h"
#pragma GCC optimize "03"
using namespace std;

#define int long long int
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i = a; i < b; ++i)
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
#ifndef LOCAL
#define dbg(...) ;
#define endl '\n'
#endif

const int inf = 1e15;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;

int a[N], pre[N];

signed main(){
    IOS;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    map<int, int> id;
    id[0] = 0;
    int ans = 0;
    int corr = 0;
    for (int i = 1; i <= n; i++) {
        if (id.find(pre[i]) != id.end())
            corr = max(id[pre[i]] + 1, corr);
        ans += i - corr;
        id[pre[i]] = i;
    }
    cout << ans << endl;
    return 0;
}