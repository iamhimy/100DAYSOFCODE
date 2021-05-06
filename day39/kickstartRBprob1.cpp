#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int r=0;r<t;r++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << "Case #" << r+1 << ": " ;
        for(int i=0;i<n;i++){
            int count=1;
            if (i==0){
                cout << count << " ";
            }
            else {
                    for (int j=i;j>0;j--){
                        if (s[j]>s[j-1]){
                            count++;
                        }
                        else {
                            break;
                        }
                    }
                    cout << count << " ";
            }
        }
        cout << endl;
    }
}

