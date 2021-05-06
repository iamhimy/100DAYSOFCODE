#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
   int t ;
   cin >> t;
   for (int i=0;i<t;i++) {
     int n,b;
     cin >> n >>b;
     vector<int> v;
     for (int j=0;j<n;j++){
        int c;
        cin >> c;
        v.push_back(c);
     }
     sort(v.begin(),v.end());
     int k=0;
     int sum=0;
     int c=-1;
     while ((sum<=b) && (k<=n)){
        sum+=v[k];
        c++;
        k++;
     }
     cout << "Case #" << i+1 << ": " << c <<endl;

   }
}
