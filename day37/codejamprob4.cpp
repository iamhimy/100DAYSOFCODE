#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int l;

int main() {
    l t,x,y;
    while(t-- !=0) {
        vector<l> v;
        cout << "1 2 3" << endl;
        l n=3;
        l p;
        cin >> p;
        if (p==2){
            v.push_back(1);
            v.push_back(2);
            v.push_back(3);
        }
        else if (p==3){
            v.push_back(1);
            v.push_back(3);
            v.push_back(2);
        }
        else{
            v.push_back(2);
            v.push_back(1);
            v.push_back(3);
        }
        for (l i=4;i<x;i++) {
            l b=0;
            l c=n-1;
            while(b<c){
                l mid=b+((b+c)/2);
                cout << v[mid] << " " << v[mid+1] << " " << i << endl;
                cin >> p;
                if (p==v[mid]){
                    c=mid;
                }
                else if (p==v[mid+1]){
                    b=mid+1;
                }
                else {
                    v.insert(v.begin()+mid+1,i);
                    n++;
                    break;
                }
            }
            if (n!=i){
                if(b==0){
                    v.insert(v.begin(),i);
                }
                else {
                    v.push_back(i);
                }
                n++;
            }
        }
        for (auto l : v) {
            cout << l << " ";
        }
        cout << endl ;
        cin >> p;
        if (p==-1){
            break;
        }
    }
    return 0;
}
