#include <iostream>
using namespace std;
bool IsInArea(double x, double y);
void main()
{
    double x, y;
    cin >> x >> y;
    if (IsInArea(x, y) == 0)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
}
bool IsInArea(double x, double y)
{
    if (x - y > 0 || abs(x) > 1 || abs(y) > 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}