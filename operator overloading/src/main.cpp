#include <iostream>

class Complex
{
private:
    int real, img;

public:
    Complex(const int &real = 0, const int &img = 0)
    {
        this->real = real;
        this->img = img;
    };
    void SetComplex(const int &r, const int &i)
    {
        this->real = r;
        this->img = i;
    };
    Complex operator+(const Complex &ref)
    {
        Complex temp;
        temp.real = this->real + ref.real;
        temp.img = this->img + ref.img;
        return temp;
    };
    Complex operator-(const Complex &ref)
    {
        Complex temp;
        temp.real = this->real - ref.real;
        temp.img = this->img - ref.img;
        return temp;
    };
    Complex operator*(const Complex &ref)
    {
        Complex temp;
        temp.real = this->real * ref.real;
        temp.img = this->img * ref.img;
        return temp;
    };
    Complex operator/(const Complex &ref)
    {
        Complex temp;
        temp.real = this->real / ref.real;
        temp.img = this->img / ref.img;
        return temp;
    };

    void Display() const
    {
        std::cout << this->real << "+i" << this->img << "\n";
    };

    friend Complex operator%(const Complex &ref1, const Complex &ref2);
    friend std::istream &operator>>(std::istream &in, Complex &ref);
    friend std::ostream &operator<<(std::ostream &out, const Complex &ref);
};
std::istream &operator>>(std::istream &in, Complex &ref)
{
    std::cout << "real:";
    in >> ref.real;
    std::cout << "imaginary:";
    in >> ref.img;
    return in;
};

std::ostream &operator<<(std::ostream &out, const Complex &ref)
{
    out << ref.real << "+i" << ref.img << "\n";
    return out;
};

Complex operator%(const Complex &ref1, const Complex &ref2)
{
    Complex temp;
    temp.real = ref1.real % ref2.real;
    temp.img = ref1.img % ref2.img;
    return temp;
};

int main(void)
{
    Complex c1(2, 4), c2(2, 6), c3(7, 9);
    std::cin >> c1;
    c1.Display();
    std::cin >> c2;
    c2.Display();
    std::cout << c3;
    std::cin >> c3;
    std::cout << c3;

    Complex c4 = c3 % c2;
    c4.Display();
    Complex c5=c4.operator+(c3);
    
    return 0;
}