#include "student.h"

// Constructors
Student::Student()
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    for (int i = 0; i < daysArraySize; i++)
    {
        this->daysToComplete[i] = 0;
    }
    this->degreeProgram = DegreeProgram::UNASSIGNED;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < daysArraySize; i++)
    {
        this->daysToComplete[i] = daysToComplete[i];
    }
    this->degreeProgram = degreeProgram;
}

Student::~Student()
{
}

// Getters

string Student::getStudentID()
{
    return this->studentID;
}
string Student::getFirstName()
{
    return this->firstName;
}
string Student::getLastName()
{
    return this->lastName;
}
string Student::getEmailAddress()
{
    return this->emailAddress;
}
int Student::getAge()
{
    return this->age;
}
int *Student::getDaysToComplete()
{
    return this->daysToComplete;
}
DegreeProgram Student::getDegreeProgram()
{
    return this->degreeProgram;
}

// Setters

void Student::setStudentID(string studentID)
{
    this->studentID = studentID;
}
void Student::setFirstName(string firstName)
{
    this->firstName = firstName;
}
void Student::setLastName(string lastName)
{
    this->lastName = lastName;
}
void Student::setEmailAddress(string emailAddress)
{
    this->emailAddress = emailAddress;
}
void Student::setAge(int age)
{
    this->age = age;
}
void Student::setDaysToComplete(int daysToComplete[])
{
    for (int i = 0; i < daysArraySize; i++)
    {
        this->daysToComplete[i] = daysToComplete[i];
    }
}
void Student::setDegreeProgram(DegreeProgram degreeProgram)
{
    this->degreeProgram = degreeProgram;
}

void Student::printHeader()
{
    cout << "Output format: Student ID | First Name | Last Name | Email Address | Age | Days in Course 1 | Days in Course 2 | Days in Course 3 | Degree Program\n";
}

void Student::print()
{

    cout << this->getStudentID() << "\t";
    cout << this->getFirstName() << "\t";
    cout << this->getLastName() << "\t";
    cout << this->getEmailAddress() << "\t";
    cout << this->getAge() << "\t";
    cout << this->getDaysToComplete()[0] << ",";
    cout << this->getDaysToComplete()[1] << ",";
    cout << this->getDaysToComplete()[2] << "\t";
    cout << degreeProgramStrings[(int)this->getDegreeProgram()] << "\n";
}
