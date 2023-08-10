#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int *p = &n;

    cout << "Address of n: " << &n << endl;
    cout << "Value of n: " << n << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value of (dereferencing p, value of what it's pointing to) *p: " << *p << endl;
    cout << "Value of &p aka memory address of the pointer itself : " << &p << endl;

    cout << "-------------------" << endl;

    return 0;
}