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
class Cuboid : public Rectangle
{
private:
    float height;

public:
    Cuboid(const float &len, const float &b, const float &h)
    {
        this->height = h;
        this->setLen(len);
        this->setBreadth(b);
    };
    friend void operator<<(std::ostream &out, const Cuboid &ref);
};
void operator<<(std::ostream &out, const Cuboid &ref)
{
    out << "height : " << ref.height << "\nLength : " << ref.getLen() << "\nBreadth : " << ref.getBreadth() << "\n";
};

int main(void)
{
    Cuboid House(45, 42, 2);
    std::cout << House;
    return 0;
}