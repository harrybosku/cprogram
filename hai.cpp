
#include<iostream>
using namespace std;
struct Point
{
    int x, y;
};
int is(Point p, Point q)
{
    return (p.x - q.x)*(p.x - q.x) +
           (p.y - q.y)*(p.y - q.y);
}
bool Square(Point p1, Point p2, Point p3, Point p4)
{
    int d2 = is(p1, p2);  // from p1 to p2
    int d3 = is(p1, p3);  // from p1 to p3
    int d4 = is(p1, p4);  // from p1 to p4
 
    if (d2 == d3 && 2*d2 == d4)
    {
        int d = is(p2, p4);
        return (d == is(p3, p4) && d == d2);
    }
 
    
    if (d3 == d4 && 2*d3 == d2)
    {
        int d = is(p2, p3);
        return (d == is(p2, p4) && d == d3);
    }
    if (d2 == d4 && 2*d2 == d3)
    {
        int d = is(p2, p3);
        return (d == is(p3, p4) && d == d2);
    }
 
    return false;
}
 

int main()
{
    Point p1 = {20, 10}, p2 = {10, 20},
          p3 = {20, 20}, p4 = {10, 10};
    Square(p1, p2, p3, p4)? cout << "Yes": cout << "No";
    return 0;
}
