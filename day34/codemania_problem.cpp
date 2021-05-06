#include<bits/stdc++.h>
using namespace std;
long int lowestcd(long int n){
    for (long int i=1;i<=n;i++){
        if ((n%i)!=0){
            return i;
        }
    }
}
long int strength(long int n) {
    long int count=1;
    while (n!=2) {
        n=lowestcd(n);
        count++;
    }
    return count;
}
int main() {
    long int x,y;
    cin >> x >> y;
    int sum=0;
    for (long int i=x;i<=y;i++){
        if (i%x==0){
            sum+=strength(x);
        }
        else {
            sum+=strength(i);
        }
    }
    cout << sum;
    return 0;
	// Write your code here
}
