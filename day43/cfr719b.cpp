#include <iostream>
using namespace std;
#define int long long
#define f(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
int countDigit(long long n) {
  return floor(log10(n) + 1);
}
int create(int x){
    int y=x-1;
    num+=10^y
    if (x==1){
        return num;
    }
    create(x--)
}
signed main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt=0;
        if (n<10){
            cout << n << endl;
        }
        else {
            int x=countDigit(n);
            int y=x-1;
            cnt+=(9*y)
            int div=0;
            f(i,x){

            }
        }

    }
}
