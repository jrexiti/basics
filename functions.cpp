#include <iostream>
#include <thread>
#include <chrono>

void print_hello_world()
{
    std::cout << "hello world!" << std::endl;
}

void greet(std::string name, int age)
{
    std::cout << "Hello " << name << " you are " << age << " years old"
              << std::endl;
}

int tripple(int number)
{
    return number * 3;
}

void print_tripple(int number)
{
    std::cout << "The tripple of " << number << " is " << tripple(number)
              << " this is coming from print_tripple() " << std::endl;
}

int main()
{
    std::string user_name;
    int user_age;
    int number;
    std::cout << "Enter your name: ";
    std::cin >> user_name;
    std::cout << "Enter your age: ";
    std::cin >> user_age;
    std::cout << "Enter a number: ";
    std::cin >> number;

    print_hello_world();
    greet(user_name, user_age);
    std::cout << "The tripple of " << number << " is " << tripple(number)
              << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));

    print_tripple(number);

    return 0;
}