#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include <string>
class Employee
{
protected:
    std::string name;
    unsigned int ID;

public:
    Employee(const std::string &, const unsigned int &ID);
};
class FullTimeEmployee : protected Employee
{
private: 
    double salary;

public:
    FullTimeEmployee(const std::string &name, const unsigned  int &ID, const double &salary) :Employee(name, ID)
    {
        this->salary = salary;
    };
    void PrintInfo() const;
};
class PartTimeEmployee : protected Employee
{
private:
    double wases;

public:
    PartTimeEmployee(const std::string &name, const int &ID, const double &wases) :Employee(name, ID)
    {
        this->wases = wases;
    };
    void PrintInfo() const;
};

#endif