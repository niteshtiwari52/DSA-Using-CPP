// WAP to to print the largest of 3 numbers
#include <iostream>
using namespace std;
int main()
{
    // initialization
    int n1, n2, n3;

    // Inputs
    cin >> n1 >> n2 >> n3;

    // logic for calculating large numbers
    if (n1 > n2 && n1 > n3)
    {
        cout << n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << n2;
    }
    else
    {
        cout << n3;
    }

    return 0;
}