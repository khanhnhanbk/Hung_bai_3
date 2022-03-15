#include "CPoint2D.h"

CPoint2D::CPoint2D()
{
    x = 0;
    y = 0;
}
CPoint2D::CPoint2D(float x, float y)
{
    this->x = x;
    this->y = y;
}
CPoint2D::~CPoint2D()
{
}
float CPoint2D::getX()
{
    return x;
}
float CPoint2D::getY()
{
    return y;
}
void CPoint2D::setX(float x)
{
    this->x = x;
}
void CPoint2D::setY(float y)
{
    this->y = y;
}
float CPoint2D::calculateDistance(CPoint2D p)
{
    return sqrt(pow(x - p.getX(), 2) + pow(y - p.getY(), 2));
}
void CPoint2D::input()
{
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
}
void CPoint2D::output()
{
    cout << fixed << setprecision(2) << "(" << x << ", " << y << ")";
}
