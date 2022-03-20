#include <iostream>
class Rectangle
{
private:
    float len,
        breadth, otherData;
    char Family;

public:
    Rectangle(float len, float breadth)
    {
        this->len = len;
        this->breadth = breadth;
    };

    int Area();
    const char *Type();
    unsigned int Size() const;
};
unsigned int Rectangle::Size() const
{
    return sizeof(Rectangle);
};

int Rectangle::Area()
{
    return this->len * this->breadth;
};
const char *Rectangle::Type()
{
    return {this->len == this->breadth ? "Ohh! This is Square, " : "Yeah this is rectangle, "};
};

int main(void)
{
    Rectangle Square(45, 45);
    std::cout << "Type : " << Square.Type()
              << "\nArea : " << Square.Area()
              << "\nSize : " << Square.Size() << "\n";

    return 0;
}