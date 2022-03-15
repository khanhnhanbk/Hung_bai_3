#include "CStudent.h"

CStudent::CStudent()
{
    // input from keyboard
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Enter math score: ";
    cin >> math;
    cout << "Enter literature score: ";
    cin >> literature;
}
CStudent::CStudent(string fullName, float math, float literature)
{
    this->fullName = fullName;
    this->math = math;
    this->literature = literature;
}
CStudent::~CStudent()
{
}

string CStudent::getFullName()
{
    return fullName;
}
float CStudent::getMath()
{
    return math;
}
float CStudent::getLiterature()
{
    return literature;
}
float CStudent::calculateAverage()
{
    return (math + literature) / 2.0;
}
string CStudent::rank()
{
    float average = calculateAverage();
    if (average >= GRADERANK[0])
        return TYPERANK[0];
    else if (average >= GRADERANK[1])
        return TYPERANK[1];
    else if (average >= GRADERANK[2])
        return TYPERANK[2];
    else if (average >= GRADERANK[3])
        return TYPERANK[3];
    else
        return TYPERANK[4];
}

void CStudent::input()
{
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Enter math score: ";
    cin >> math;
    cout << "Enter literature score: ";
    cin >> literature;
}
void CStudent::output()
{
    // fixed width output
    cout << std::fixed << std::setprecision(2);
    cout << "Full name: " << fullName << endl;
    cout << "Math score: " << math << endl;
    cout << "Literature score: " << literature << endl;
    cout << "Average: " << calculateAverage() << endl;
    cout << "Rank: " << rank() << endl;
}