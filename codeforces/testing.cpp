/*Abhilash Tayade
    CSE MNNIT-ALLAHABAD 
    3rd yr :D  */
 
#include<bits/stdc++.h>         
using namespace std;
#define mk make_pair
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#define lf double
#define M  1000000007
#define INF 1e18
#define fi first
#define se second
#define fr(u,v,w) for(int u=v;u<=w;u++)
#define frr(u,v,w) for(int u=v;u>=w;u--)
#define S 200005
#define A 5000004
#define PIE 3.141592653589793238462643383279502884197169399
#define BLOCK 800 // ~sqrt(N)
// #define pa pair<ll,ll>
// __builtin_popcount()
#include <iostream>
#include <string>
// int dx[4]={-1, 1, 0, 0}, dy[4]={0, 0, -1, 1};
// char dc[5]={'U', 'D', 'L', 'R','X'};


vector<pair<pair<int,int> ,int> >v;
int a[S],mini[S];

bool cmp(pair<pair<int,int>,int>p1,pair<pair<int,int>,int>p2){
    if(p1.fi.se!=p2.fi.se) return p1.fi.se<p2.fi.se;
    return p1.fi.fi<p2.fi.fi;
}

int main()
{   
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    // ios_base::sync_with_stdio(0);
    //    cin.tie(nullptr);

    int t,n,x,y,ans;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        v.clear();ans=-1;
        
        // for(int i=0;i<=200001;i++) en[i]=0,st[i]=0;

        for(int i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            // st[x]++;
            // en[y]++;
            v.pb(mk(mk(x,y),i));
        }

        sort(v.begin(),v.end(), cmp);

        mini[n-1]=v[n-1].fi.fi;

        for(int i=n-2;i>=0;i--)
            mini[i]=min(mini[i+1],v[i].fi.fi);

        for(int i=0;i<n;i++) cout<<v[i].fi.fi<<" "<<v[i].fi.se<<endl;

        for(int i=0;i<n-1;i++){
            if(v[i].fi.se<mini[i+1]){
                ans=i;break;
            }
        }

        if(ans==-1) cout<<ans<<endl;
        else{
            for(int i=0;i<n;i++){
                if(i<=ans)
                a[v[i].se]=1;
            else
                a[v[i].se]=2;
            }

            for(int i=0;i<n;i++) cout<<a[i]<<" ";
                cout<<endl;
        }
    }

}   
