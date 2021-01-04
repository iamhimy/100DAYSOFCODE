#include <iostream>
using namespace std;

struct point {
 int x;
 int y;
} ;
typedef struct student {
 int age ;
 string name ;
 string city;
 int standard;
}S; // typredef help us to create alias for names we structed
typedef struct city {
 string name ;
 int population;
}C;
struct nation {
 string name;
 int rating;
};
int main() {
   point p;
   p.x=10;
   p.y=20;
   cout << p.x << " " << p.y << endl; // there are no. of ways to give data inside structed class

   S s={10,"chandu","guwahati",16};
   cout << s.age << " " << s.name << " " << s.city << " " << s.standard << endl;

   C c= {.name="delhi", .population=10000}; // this is called designated initialisation
   cout << c.name << " " << c.population << endl;

   nation n;
   cin >> n.name >> n.rating;
   cout <<n.name << n.rating;
   return 0;


}
