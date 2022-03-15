#ifndef CCIRCLE_H
#define CCIRCLE_H
#include "CPoint2D.h"

class CCircle
{
private:
    CPoint2D m_pt2DCenter;
    double m_dRadius;
public:
    void init(float,float, double);
    CPoint2D getCenter();
    double getRadius();
    void setCenter(float, float);
    void setRadius(double);
    void move(float, float);
    double getPerimeter();
    double getArea();
    bool isInside(CCircle);
    bool isOverlap(CCircle);
    bool isBoundary(CCircle);
    bool isIntersion(CCircle);
    bool isContact(CCircle);
    bool isOutSide(CCircle);
};

#endif