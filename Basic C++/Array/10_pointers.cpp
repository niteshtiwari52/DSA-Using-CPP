// Problem :
#include <iostream>
using namespace std;
int main()
{
    // pointers --> store the address of a variable
    int x = 10;
    // address of x
    cout << &x << endl;
    // declaring pointer variable
    int *y = &x;
    // y = &x ;
    cout << y << endl;

    // sizeof of pointers 
    int a = 10 ; 
    float *b ; 
    char *c ; 
    string *d;
    cout<<"Siz of pointers"<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;

    return 0;
}