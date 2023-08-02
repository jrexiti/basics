#include <iostream>
#include <vector>

int main()
{

    int number = 100, anotherNumber = 200;
    double price = 9.99;

    const double pi = 3.14;
    std::cout << "hello world" << std::endl;
    std::cout << number << std::endl;
    std::cout << price << std::endl;

    std::cout << 2 * pi << std::endl;

    bool isTrue = true;
    bool isFalse = false;

    std::string name = "John";
    std::string lastName = "Doe";

    std::cout << name << " |hey there| " << lastName << std::endl;

    std::cout << isTrue << "| |" << isFalse << std::endl;

    // regular array
    double temperature_list[4] = {1.2, 2.3, 3.4, 4.5};
    std::cout << temperature_list[0] << std::endl;
    temperature_list[0] = 9.9111;

    std::cout << temperature_list[0] << std::endl;

    // vectors are dynamic arrays
    //  to use vectors you need to include the vector library

    std::vector<double> second_list(4);
    second_list.at(0) = 1.2;
    second_list.at(2) = 9.11;

    std::cout << second_list.at(0) << std::endl;
    std::cout << "size of vector: " << second_list.size() << std::endl;

    return 0;
}