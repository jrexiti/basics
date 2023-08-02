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

    for (int i = 0; i < 10; i++)
    {
        cout << "Hello at index: " << i << " from the for loop!" << endl;
    }

    int i = 0;
    while (i < 10)
    {
        cout << "Hello at index: " << i << " form the while loop!" << endl;
        i++;
    }

    // lists and loops

    int num_list[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << "The number at index " << i << " in the array is " << num_list[i] << endl;
    }

    // clang wont compile this if i initialize the vector on the same line.
    // for now, thiw will do

    vector<double> num_list2(4);
    num_list2.at(0) = 12.22;
    num_list2.at(1) = 13.33;
    num_list2.at(2) = 14.44;
    num_list2.at(3) = 15.55;

    for (int i = 0; i < num_list2.size(); i++)
    {
        cout << "The number at index " << i << " in the vector is " << num_list2.at(i)
             << endl;
    }

    for (double item : num_list2)
    {
        cout << item << " from the range-based for loop" << endl;
    }

    return 0;
}