// WAP to print the current year is a leap yeear or not
#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "leap year";
    }
    else
    {
        cout << "not leap year";
    }
    return 0;
}