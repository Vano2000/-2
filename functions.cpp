#include <iostream>
using namespace std;
double f(double x);
bool IsInArea(double x, double y);
void task1()
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
void task2()
{
    double x;
    cout << "x = ";
    cin >> x;
    cout << "f = " << f(x);
}
double f(double x)
{
    if (x <= 3)
    {
        return x * x - 3 * x + 9;
    }
    else
    {
        return 1 / (x * x * x + 6);
    }
}