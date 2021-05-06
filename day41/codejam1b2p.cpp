#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int getRand(int l, int r)
{
    uniform_int_distribution<int> uid(l, r);
    return uid(rng);
}

#define int long long
#define pb push_back
#define S second
#define F first
#define f(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define all(x) x.begin(),x.end()
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define precise(x) fixed << setprecision(x)

const int MOD = 1e9+7;

int check(vector<int> v){
    int s=v[v.size()-1]+v[v.size()-2];
    return s;
}


void solve () {
   int n,a,b;
   cin >> n >> a >> b;
   int res;
   vector<int> v;
   for (int j=0;j<n;j++){
        int x;
        cin >> x;
        v.push_back(x);
   }
   if ((n>=5) && (b>=5)){
        cout << n+b << endl;
   }
   else if (n>=b ){
        if (check(v)==1){
            cout << n+a ;
        }
        else {
            cout << n+b << endl;
        }
   }
   else {
        if (check(v)==1){
            cout << n+a << endl;
        }
        else {
            cout << "IMPOSSIBLE" << endl;
        }
   }
}


signed main()
{
    fast;

    int t = 1;

    cin >> t;

    for(int i=1;i<=t;i++)
    {
    cout <<"Case #" << i <<": ";
    solve();
    }
}
