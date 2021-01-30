#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;


class Student {
    public :
        int n=5;
        int scores[5];
        void input() {
            int a=0,b=0,c=0,d=0,e=0;
            cin >> a >> b >> c >> d >> e;
            scores[0]=a;
            scores[1]=b; // to not get error called "assigning array from initialer list" on assigning values to array directly
            scores[2]=c; // we have to assign values to array through indexes
            scores[3]=d;
            scores[4]=e;

        }
        int calculateTotalScore() {
            int i,s=0;
            for (i=0;i<n;i++){
                s=s+scores[i];
            }
            return s;
        }
    };// Write your Student class here

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
