#include "math_utils.h"

double area(double length, double width)
{
    return length * width;
}

double area(double length)
{
    return length * length;
}

double area(Rectangle rect)
{
    return rect.length * rect.width;
}
