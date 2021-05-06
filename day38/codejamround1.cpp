#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int countd(long long n)
{
    if (n == 0)
        return 0;
    return 1 + countd(n / 10);
}
int main() {
    int t ;
    cin >> t;
    for (int j=0;j<t;j++){
        int n ;
        cin >> n;
        int prev=0;
        int count=0;
        for (int i=0;i<n;i++){
            int x;
            cin >> x;
            if (x<=prev){
                int z=prev/x;
                int v=countd(z);
                cout << v;
                count+=v;
                int mul=pow(10,v);
                prev=x*mul;
                cout << prev;
            }
            else {
                prev=x;
            }
        }
        cout << "Case #" << j+1 << ": " << count <<endl;
    }
}
