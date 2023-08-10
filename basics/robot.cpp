#include "robot.hpp"

Robot::Robot(string name, int version)
    : name(name), version(version),
      internal_temperature(36.6)
{
}

void Robot::say_hello()
{
    cout << "Hello, my name is "
         << name
         << ", how may I help you?"
         << endl;
}

void Robot::print_info()
{
    cout << "Name: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Internal temperature: " << internal_temperature << endl;
}

RobotArm::RobotArm(string name, int version, double reach)
    : Robot(name, version), reach(reach)
{
}
void RobotArm::pick_object(double x, double y)
{
    cout << "Picking up object at position (" << x << ", " << y << ")" << endl;
}
void RobotArm::drop_object(double x, double y)
{
    cout << "Dropping object at position (" << x << ", " << y << ")" << endl;
}