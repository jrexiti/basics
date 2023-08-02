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

    cout << "____________________" << endl;

    RobotArm robot_arm("R2D2's arm", 1, 0.5);
    robot_arm.print_info();
    robot_arm.pick_object(1.0, 2.0);
    robot_arm.drop_object(3.0, 4.0);
    return 0;
}