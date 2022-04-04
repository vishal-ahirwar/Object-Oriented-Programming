
// Copyright© 2022 Vishal Ahirwar.
#include "derived.hpp"
class Parent
{
public:
    int a;

    int b;

    int c;

public:
    void PrintMembers() const;
};
void Parent::PrintMembers() const
{
    printf("Parent class:\na=%d, b=%d, c=%d\n", this->a, this->b, this->c);
};

class Child : protected Parent
{
public:
    void PrintMembers() const;
};
void Child::PrintMembers() const
{
    printf("Child class:\na=%d, b=%d, c=%d\n", this->a, this->b, this->c);
};

class GrandChild : public Child
{
public:
    void PrintMembers() const;
};
void GrandChild::PrintMembers() const
{
    printf("GrandChild class:\na=%d, b=%d, c=%d\n", this->a, this->b, this->c);
};

int main()
{
    GrandChild Shyam;
    Shyam.PrintMembers();
    return 0;
};
