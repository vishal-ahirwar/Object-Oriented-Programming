#include <iostream>
#include <fstream>
int cmpr(const char *str1, const char *str2)
{
    for (int i = 0; str1[i] != '\0'; ++i)
    {
        if (str1[i] != str2[i])
            return 0;
    };
    return 1;
};

class Student
{
    std::string FirstName, LastName;
    int Age, RollNumber;

public:
    friend std::ofstream &operator<<(std::ofstream &out, const Student &s);
    friend std::ifstream &operator>>(std::ifstream &in, Student &s);
    friend std::istream &operator>>(std::istream &in, Student &s);
    void Display() const;
};
std::istream &operator>>(std::istream &in, Student &s)
{
    std::cerr << "First Name  :";
    in >> s.FirstName;
    std::cerr << "Last Name  :";
    in >> s.LastName;
    std::cerr << " Age  :";
    in >> s.Age;
    std::cerr << "Roll Number : ";
    in >> s.RollNumber;
    return in;
};

std::ofstream &operator<<(std::ofstream &out, const Student &s)
{
    out << s.FirstName <<"\n"<<s.LastName<<"\n"<< s.Age << "\n"<<s.RollNumber << "\n";

    return out;
};
std::ifstream &operator>>(std::ifstream &in, Student &s)
{
    in >> s.FirstName>> s.LastName >> s.Age >> s.RollNumber;
    return in;
};
void Student::Display() const
{
    std::cerr << "First Name  : " << this->FirstName << "\nLast Name : " << this->LastName << "\nAge : " << this->Age << "\nRoll Number : " << this->RollNumber << "\n";
};

int main(int argc, char **argv)
{

    if (cmpr(argv[argc - 1], "write"))
    {
        std::cerr << "\n[Writting to file ../res/info.vi]\n\n";
        std::ofstream out("../res/info.vi", std::ios::app);
        while (true)
        {
            Student s;
            std::cin >> s;
            out << s;
            std::cerr << "would you like add more student data : [y/n]";
            char c;
            std::cin >> c;
            if (c == 'n')
                break;
        };
        out.close();
    }
    else
    {
        std::ifstream in("../res/info.vi");
        Student s;
        if (in)
        {
            while (true)
            {

                in >> s;
                std::cerr<<"\n\n---------------------\n\n";
                s.Display();

                if (in.eof())
                    break;
            };
        }
        in.close();
    };
    std::cerr << "\nshtting down ...\n";

    return 0;
};
