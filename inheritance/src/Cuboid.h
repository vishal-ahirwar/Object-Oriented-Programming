#ifndef CUBOID
#define CUBOID
#include"Rectangle.h"

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

#endif