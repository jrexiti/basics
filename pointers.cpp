#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int *p = &n;

    cout << "Address of n: " << &n << endl;
    cout << "Value of n: " << n << endl;
    cout << "Value of p: " << p << endl;

    cout << "-------------------" << endl;

    return 0;
}