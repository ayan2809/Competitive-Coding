#include <iostream>
using namespace std;

class Point {
private:
   int x, y;
 
public:
   Point(int x = 0, int y = 0);
   Point & operator++();              // ++prefix
   const Point operator++(int dummy); // postfix++
   const Point operator+(const Point & rhs) const; // Point + Point
   const Point operator+(int value) const;           // Point + int
   Point & operator+=(int value);           // Point += int
   Point & operator+=(const Point & rhs); // Point += Point
 
   friend std::ostream & operator<<(std::ostream & out, const Point & point); // out << point
   friend std::istream & operator>>(std::istream & in, Point & point);        // in >> point
   friend const Point operator+(int value, const Point & rhs); // int + Point
};
// Constructor - The default values are specified in the declaration
Point::Point(int x, int y) {
	x=0;
	y=0;
}
 
// Overload ++Prefix, increase x, y by 1
Point & Point::operator++() {
	++x;
	++y;
  
}
 
// Overload Postfix++, increase x, y by 1
const Point Point::operator++(int dummy) {
   x++;
   y++;
   
}
 
// Overload Point + int. Return a new Point by value
const Point Point::operator+(int value) const {
  return Point(+value);
}
 
// Overload Point + Point. Return a new Point by value
const Point Point::operator+(const Point & rhs) const {
   
}
 
// Overload Point += int. Increase x, y by value
Point & Point::operator+=(int value) {
 
}
 
// Overload Point += Point. Increase x, y by rhs
Point & Point::operator+=(const Point & rhs) {
  
}
 
// Overload << stream insertion operator
ostream & operator<<(ostream & out, const Point & point) {
 	out<<point.x<<point.y;
 	return out;
  
}
 
// Overload >> stream extraction operator
istream & operator>>(istream & in, Point & point) {
  in >> point.x >> point.y;
         return in;
}
 
// Overload int + Point. Return a new point
const Point operator+(int value, const Point & rhs) {
	 return Point(x + rhs.x, y + rhs.y);
}
int main() {

   int a,b,c,d;
   cin>>a>>b>>c>>d;
   Point p1(a, b);
   cout << p1 << endl;   
 
   Point p2(c,d);
   cout << p1 + p2 << endl; 
   cout << p1 + 10 << endl;
   cout << 20 + p1 << endl; 
   cout << 10 + p1 + 20 + p1 << endl; 
 
   p1 += p2;
   cout << p1 << endl; 
   p1 += 3;
   cout << p1 << endl; 
 
   Point p3;  
   cout << p3++ << endl; 
   cout << p3 << endl;   
   cout << ++p3 << endl; 
   
   return 0;
}
