#include "CCircle.h"

void CCircle::init(float x, float y, double radius)
{
    m_pt2DCenter.setX(x);
    m_pt2DCenter.setY(y);
    m_dRadius = radius;
}
void CCircle::setCenter(float x, float y)
{
    m_pt2DCenter.setX(x);
    m_pt2DCenter.setY(y);
}
void CCircle::setRadius(double radius)
{
    m_dRadius = radius;
}
CPoint2D CCircle::getCenter()
{
    return m_pt2DCenter;
}
double CCircle::getRadius()
{
    return m_dRadius;
}
void CCircle::move(float x, float y)
{
    m_pt2DCenter.setX(m_pt2DCenter.getX() + x);
    m_pt2DCenter.setY(m_pt2DCenter.getY() + y);
}
double CCircle::getPerimeter()
{
    return 2 * M_PI * m_dRadius;
}
double CCircle::getArea()
{
    return M_PI * pow(m_dRadius, 2);
}
bool CCircle::isInside(CCircle c)
{
    // if this circle is inside c
    return (m_pt2DCenter.calculateDistance(c.getCenter()) + m_dRadius <= c.getRadius());
}
bool CCircle::isOverlap(CCircle c)
{
    // if this circle is overlap c
    return m_dRadius == c.getRadius() || (m_pt2DCenter.calculateDistance(c.getCenter()) == 0);
}
bool CCircle::isBoundary(CCircle c)
{
    // if this circle is boundary c
    return c.isInside(*this) || c.isOverlap(*this);
}
bool CCircle::isIntersion(CCircle c)
{
    // if this circle is intersion c
    float RR = m_pt2DCenter.calculateDistance(c.getCenter());
    return RR > abs(m_dRadius - c.getRadius()) && RR < m_dRadius + c.getRadius();
}
bool CCircle::isContact(CCircle c)
{
    float RR = m_pt2DCenter.calculateDistance(c.getCenter());
    return RR == abs(m_dRadius - c.getRadius()) || RR == m_dRadius + c.getRadius();
}
bool CCircle::isOutSide(CCircle c)
{
    // if this circle is out side c
    float RR = m_pt2DCenter.calculateDistance(c.getCenter());
    return RR > m_dRadius + c.getRadius();
}