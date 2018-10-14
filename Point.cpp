#include "Point.h"

Point::Point(float x, float y)
: m_x(x)
, m_y(y)
{
}

void Point::setPosition(float x, float y)
{
    m_x = x;
    m_y = y;
}

void  Point::setX(float x)
{
    m_x = x;
}

void  Point::setY(float y)
{
    m_y = y;
}

float Point::getX()
{
    return m_x;
}

float Point::getY()
{
    return m_y;
}
