#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot
{

    // class scope
public:
    Robot(string name, int version);

    void say_hello();
    void print_info();

private:
    string name;
    int version;
    double internal_temperature;
};
#endif