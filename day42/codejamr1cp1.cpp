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
#define MAX 100
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

vector<vector <int>> printCombinations(string s){
    vector<vector <int>> v;
    int l = s.length();

    for(int i = 0; i < pow(2, l - 1); i++){
        int k = i, x = 0;
        vi a;
        string d;
        d+=s[x];
        x++;
        for(int j = 0; j < s.length() - 1; j++){
            if(k & 1){
                    stringstream g(d);
                    int di;
                    g >> di;
                    a.pb(di);
            }
            k = k >> 1;
            d+=s[x];
            x++;
        }
        v.pb(a);
    }
    return v;
}
bool checkroar(int year){
    int flag=1;
    ostringstream str1;
    str1 << year;
    string geek = str1.str();
    vector<vector <int>> v=printCombinations(geek);
    for (int i=0;i<v.size();i++){
        for (int j=0;j<v[i].size()-1;j++){
            if (v[i][j+1]!=v[i][j]+1){
                flag=0;
                break;
            }
        }
        if (flag==1){
            break;
        }
    }
    if (flag==1){
        return true;
    }
    else {
        return false;
    }
}

void solve () {
    int year;
    cin >> year;
    int i=1;
    while(checkroar(year+i)!=true){
        i++;
    }
    cout << year+i;
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
