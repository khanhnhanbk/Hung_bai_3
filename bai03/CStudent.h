#ifndef CSTUDENT_H
#define CSTUDENT_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const string TYPERANK[] = {"Excellent", "Good", "Fairly Good", "Average", "Fail"};
const float GRADERANK[] = {9.5, 8, 6.5, 5, 0};
class CStudent
{
private:
    string fullName;
    float math, literature;
public:
    CStudent();
    CStudent(string, float, float);
    ~CStudent();
    string getFullName();
    float getMath();
    float getLiterature();
    float calculateAverage();
    string rank();
    void input();
    void output();
};



#endif // CSTUDENT_H