#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
    public :
        char buffer[50];
        int a,s;
        string fname,lname;
        void set_age(int x) { a=x ;}
        int get_age(){ return a;}
        void set_first_name(string y){ fname=y;}
        string get_first_name() { return fname ;} //once assigned some value in any of the method/function a variable posses that
        void set_last_name(string last_name){lname=last_name ;}  // value throughout the function untill updated
        string get_last_name(){return lname;}
        void set_standard(int standard){s= standard;}
        int get_standard(){return s;}
        string to_string() {
            stringstream ss;
            ss << a;             // to convert int to string using sstream  is one of the method
            string age= ss.str();
            stringstream ss1;
            ss1 << s;
            string stan= ss1.str();
            string x= age + "," + fname + "," + lname + "," + stan;
            return x ;}
    };


int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

