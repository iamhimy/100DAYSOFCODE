#include <bits/stdc++.h>
using namespace std;
vector<int> primeFactors(int n){
    vector<int> prime;
    while (n % 2 == 0)
    {
        prime.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0)
        {
            prime.push_back(i);
            n = n/i;
        }
    }
    if (n > 2){
        prime.push_back(n);
    }
    return prime;
}

// A optimized school method based C++ program to check
// if a number is prime


bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int n;
        cin >> n;
        int flag=0;
        while (flag!=1){
        vector<int> pr;
        pr=primeFactors(n);
        for (int j=pr[0]+1;j<pr[pr.size()-1];j++){
            if (isPrime(j)==true){
                n--;
                flag=0;
                break;
            }
            else {
                flag=1;
            }
          }
        }
        cout << "Case #" << i+1 << ": " << n << endl;
    }
}
