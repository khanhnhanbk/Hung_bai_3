#ifndef CPOINT2D_H
#define CPOINT2D_H

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

class CPoint2D
{
private:
    float x, y;
public:
    CPoint2D();
    CPoint2D(float, float);
    ~CPoint2D();
    float getX();
    float getY();
    void setX(float);
    void setY(float);
    float calculateDistance(CPoint2D);
    void input();
    void output();
};
#endif