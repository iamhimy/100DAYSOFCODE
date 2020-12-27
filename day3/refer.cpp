#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v {"helllop", "kjwrgbvkrsb", "iuyfglwaiurgf", "dfkjhvbefaikvbikafdb"} ;
    for (auto x : v){
        cout << x << " " ; // normally here each time value of an element is copied to x then printed out
    }
    for (auto &x : v) {
        cout << x << " " ; // but here we already accessing pre-created copies of elements(addresses) so speed is improved
    }
    for ( const auto &x : v){
        cout << x << " " ; // we use const if we just want to access something not modifying it so if anything changes for x due to code  it wont affect our values

    }
    return 0 ;
}
