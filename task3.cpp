#include <iostream>
using namespace std;
void task1(), task2();
void main()
{
    int count;
    cout << "Main Menu\n1-Task1\n2-Task2\n";
    cin >> count;
    switch (count)
    {
    case 1: return task1();
    case 2: return task2();
    }
}
