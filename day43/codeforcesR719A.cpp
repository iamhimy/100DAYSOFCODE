#include <iostream>
#include <vector>
using namespace std;
#define int long long
#define f(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
signed main() {
    int t;
    cin >> t;
    while(t--){
        vi v(26);
        int n;
        int flag=0;
        cin >> n;
        string s;
        cin >> s;
        f(i,n){
            for(int j=i+1;j<n;j++){
                if ((s[j]==s[i]) && (s[j]!=s[j-1])){
                    flag=1;
                    break;
                }
            }
        }
        if (flag==1){
            cout << "no" << endl;
        }
        else {
            cout << "yes" << endl;
        }

    }
}
