#include <iostream>
#include <thread>
#include <chrono>

int main()
{

    std::string user_name;
    int user_age;
    std::cout << "Enter your name: ";
    std::cin >> user_name;
    std::cout << "Enter your age: ";
    std::cin >> user_age;
    std::cout << "Hello " << user_name << " you are " << user_age
              << " years old" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));

    std::cout << "Goodbye " << user_name << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));

    int num_one;
    std::cout << "Enter a number: ";
    std::cin >> num_one;
    int num_two;
    std::cout << "Enter another number: ";
    std::cin >> num_two;
    std::cout << "The sum of " << num_one << " and " << num_two << " is "
              << num_one + num_two << std::endl;

    return 0;
}