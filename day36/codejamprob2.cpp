#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int costfind(string l,int x,int y){
    int cost=0;
    int n=l.length();
    int last='X';
    for (int i=0;i<n;i++){
        if (l[i]=='C' && last=='J') {
            cost+=y;
            last='C';
        }
        else if (l[i]=='J' && last=='C') {
            cost+=y;
            last='J';
        }
        else {
            last=l[i];
        }
    }
    return cost;

}

int main() {
    int t;
    cin >> t;
    for (int q=0;q<t;q++){
            int x=0,y=0;
            string mural;
            cin >> x >> y >> mural;
            //cout << x <<y << x+y <<endl;
            //cout << mural[2];
            int tcost=0;
            tcost=costfind(mural,x,y);
            cout << "Case #"<<q+1<<": " << tcost <<endl;
    }
    return 0;
}
