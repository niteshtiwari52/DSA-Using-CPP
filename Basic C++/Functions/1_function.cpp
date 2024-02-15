// Problem :
#include <iostream>
using namespace std;
void fun()
{
    cout << "You are inside the fun()" << endl;
}
int main()
{
    cout << "Before fun() call." << endl;
    fun();
    cout << "after fun() call." << endl;
    return 0;
}