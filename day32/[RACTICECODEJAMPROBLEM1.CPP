#include <iostream>
#include <vector>
using namespace std;

int main () {
    int t;
    cin >> t;
    int count=0;
    int sr=0;
    int sc=0;
    for (int i=0;i<t;i++){
        int n;
        cin >> n;
        vector<vector<int>> mtrix;
        for (int j=0;j<n;j++){
            vector<int> row ;
            for (int k=0;k<n;k++){
                int e;
                cin >> e;
                int same=0;
                if (same == e){
                    count++;
                }
                same = e;
                if
                //cout << e;
                row.push_back(e);
            }
            //cout << row[0];
            if (count>=1){
                count=0;
                sr++;
            }
            mtrix.push_back(row);
        }
        //cout << sr ;
        //cout << mtrix[n-1][n-2];
    }
}
