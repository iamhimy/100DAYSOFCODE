#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define S second
#define F first
#define f(i,n) for(int i=0;i<n;i++)
//#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define all(x) x.begin(),x.end()

const int MOD = 1e9+7;



void solve () {
    int b,n;
    cin>> b>> n;
    vector<int> v;
    int c=0;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int j=0;
    int sum=0;
    while (sum<=b){
        sum+=v[j];
        c++;
        j++;
    }
    cout << c;
}

int main(){
    int t = 1;

    cin >> t;

    for(int i=1;i<=t;i++){
            cout <<"Case #" << i <<": ";
            solve();
    }
    return 0;
}
