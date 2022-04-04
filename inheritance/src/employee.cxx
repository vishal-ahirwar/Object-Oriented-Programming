#include "emloyee.hpp"
Employee::Employee(const std::string &name, const unsigned int &ID)
{
    this->ID = ID;
    this->name = name;
};

void FullTimeEmployee::PrintInfo() const
{
    printf("Full Time Employee Data:\nName : %s\nID : %u\nSalary : %lf\n", this->name.c_str(), this->ID, this->salary);
};

void PartTimeEmployee::PrintInfo() const
{
    printf("Part Time Employee Data:\nName : %s\nID : %u\nWases : %lf\n", this->name.c_str(), this->ID, this->wases);
};
