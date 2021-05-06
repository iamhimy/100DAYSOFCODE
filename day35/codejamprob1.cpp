#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int reversesort(vector<int> l,int n){
    int cost=0;
    for (int i=0;i<n-1;i++) {
       int k=0;
       int mn=1000;
       for (int j=i;j<n;j++){
            if (l[j]<mn){
                mn=l[j];
                k=j;
            }
       }
       //cout << k << endl;   /*test*/
       int c=k-i+1;
       cost+=c;
       int f=0;
       for(int w=i;w<(i+k)/2+1;w++){
            swap(l[w],l[k-f]);
            f+=1;
       }
       for (int h=0;h<n;h++) {   /*test*/
           cout << l[h] ;
       }
       cout << cost <<endl;

    }
    return cost;
}

int main() {
    int t;
    cin >> t;
    for (int q=0;q<t;q++){
            int n;
            cin >> n;
            vector<int> l;
            for (int z=0;z<n;z++) {
                int i;
                cin >> i;
                l.push_back(i);
            }
            int cost=0;
            cost=reversesort(l,n);
            cout << "Case#"<<q+1<<": " << cost <<endl;
    }
    return 0;
}
