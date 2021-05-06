#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
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
     //cout << v[0] << v[1] << v[2] << v[3] << endl;
     int k=0;
     int sum=0;
     while ((sum<=b) && (k<n)){
        sum+=v[k];
        k++;
     }
     cout << "Case #" << i+1 << ": " << k-1 <<endl;

   }
}
