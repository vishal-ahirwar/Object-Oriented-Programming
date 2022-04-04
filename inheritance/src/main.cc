
// Copyright© 2022 Vishal Ahirwar.
// #include "derived.hpp"
#include "emloyee.hpp"
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
    // GrandChild Shyam;
    // Shyam.PrintMembers();
    FullTimeEmployee Rohan("Rohan Ahirwar", 12, 45000.0);
    PartTimeEmployee Vishal("Vishal Ahirwar", 5, 12000.0);
    PartTimeEmployee Piyush("Piyush Shrivas", 3, 9878112.45);
    FullTimeEmployee Dinesh("Dinesh Anuragi", 10, 45000.0);


    printf("\n-----------\nShowing Employee Data\n-------------\n\n");
    Rohan.PrintInfo();
    Dinesh.PrintInfo();
    Vishal.PrintInfo();
    Piyush.PrintInfo();

    return 0;
};
