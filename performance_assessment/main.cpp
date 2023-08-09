#include <iostream>
#include "student.hpp"
#include "roster.hpp"
#include "degree.hpp"
#include <string>
#include <array>
using namespace std;

int main()
{

    cout << "Course: C867 SCRIPTING AND PROGRAMMING APPLICATIONS" << endl;
    cout << "Programming Language: C++ " << endl;
    cout << "Student ID: 011345341" << endl;
    cout << "Student Name: Jiewulan Rexiti" << endl;
    cout << "   " << endl;

    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Jiewulan,Rexiti,jrexit2@wgu.edu,33,19,42,12,NETWORK"};

    Roster *classRoster = new Roster(5);
    for (int i = 0; i < 5; i++)
    {
        classRoster->parse(studentData[i]);
    };

    // functions
    classRoster->printAll();
    cout << endl;
    cout << endl;

    classRoster->printInvalidEmails();

    for (int i = 0; i < 5; i++)
    {

        classRoster->printAverageDaysInCourse(classRoster->GetStudentID(i));
    }
    cout << endl;
    cout << endl;

    classRoster->printByDegreeProgram(SOFTWARE);
    cout << endl;
    cout << endl;

    classRoster->remove("A3");
    cout << endl;
    cout << endl;

    classRoster->printAll();
    cout << endl;
    cout << endl;

    classRoster->remove("A3");
    cout << endl;

    // destructor
    classRoster->~Roster();
    delete classRoster;
}