#include<bits/stdc++.h>
 
struct Point
{
    int x, y;
};
bool lap(Point L1, Point S1, Point L2, Point S2)
{
   
    if (L1.x > S2.x || L2.x > S1.x)
        return false;
    if (L1.y < S2.y || L2.y < S1.y)
        return false;
 
    return true;
}
 
int main()
{
    Point L1 = {0, 10}, S1 = {10, 0};
    Point L2 = {5, 5}, S2 = {15, 0};
    if (lap(L1, S1, L2, S2))
        printf(" Overlap");
    else
        printf("no Overlap");
    return 0;
}
