#include <iostream>
#include <string>
// global scope for the whole file

using namespace std;

class Robot
{

    // class scope
public:
    Robot(string name, int version)
        : name(name), version(version),
          internal_temperature(36.6)
    {
    }

    void say_hello()
    {
        cout << "Hello, my name is "
             << name
             << ", how may I help you?"
             << endl;
    }

    void print_info()
    {
        cout << "Name: " << name << endl;
        cout << "Version: " << version << endl;
        cout << "Internal temperature: " << internal_temperature << endl;
    }

private:
    string name;
    int version;
    double internal_temperature;
};

int main()
{
    // local scope to main()

    Robot robot("R2D2", 1);
    robot.say_hello();
    robot.print_info();

    return 0;
}
