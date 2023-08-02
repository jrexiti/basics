#include <iostream>
#include <string>
#include "robot.hpp"

using namespace std;

int main()
{
    Robot robot("R2D2", 1);
    robot.say_hello();
    robot.print_info();

    cout << "____________________" << endl;

    Robot robot2("C3PO", 2);
    robot2.say_hello();
    robot2.print_info();

    return 0;
}