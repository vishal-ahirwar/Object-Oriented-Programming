#ifndef RECT
#define RECT
#include <iostream>
class Rectangle
{
private:
    float len, breadth;

public:
    Rectangle(const float &len = 0.f, const float &b = 0.f)
    {
        this->len = len;
        this->breadth = b;
    };
    void setLen(const float &len)
    {
        this->len = len;
    };
    void setBreadth(const float &b)
    {
        this->breadth = b;
    };
    float getLen() const { return this->len; };
    float getBreadth() const { return this->breadth; };
};
#endif