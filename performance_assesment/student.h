#pragma
#include "degree.h"
#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
public:
    const static int daysArraySize = 3;

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[daysArraySize];
    DegreeProgram degreeProgram;

public:
    // Constructors
    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram);
    ~Student();

    // Getters
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int *getDaysToComplete();
    DegreeProgram getDegreeProgram();

    // Setters
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysToComplete(int daysToComplete[]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    static void printHeader();
    void print();
};