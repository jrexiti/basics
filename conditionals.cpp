#include <iostream>

using namespace std;

int main()
{

    int user_age;
    cout << "Enter your age: ";
    cin >> user_age;
    cout << "You are " << user_age << " years old" << endl;
    if (user_age < 18)
    {
        cout << "You are a minor" << endl;
    }
    else if (user_age >= 18 && user_age < 65)
    {
        cout << "You are an adult" << endl;
    }
    else if (user_age >= 65)
    {
        cout << "You are a senior" << endl;
    }
    return 0;
}