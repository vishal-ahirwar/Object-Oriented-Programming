#include<iostream>
#include<memory>
class Test
{
    std::string className;
    public:
    std::string GetClassName()const;
    void SetClassName(const std::string&);
    Test();
    Test(const std::string&);
    void printClassName()const;
};
void Test::printClassName()const
{
    std::cerr<<"\nclassName : "<<this->className<<"\n";
};

std::string Test::GetClassName()const
{
    return this->className;
};
void Test::SetClassName(const std::string&str)
{
    this->className=str;
};
Test::Test(const std::string&str)
{
this->className=str;
};
Test::Test():Test("None"){std::cerr<<"\nConstructor Called\n\n";};

int main()
{
       std::shared_ptr<Test> ptr(new Test());
       ptr->printClassName();
       std::shared_ptr<Test>ptr1=ptr;
       ptr1->SetClassName("shared_ptr1");
       ptr1->printClassName();
       
       std::cerr<<"total use_count of shared_ptr : "<<ptr1.use_count()<<"\n";
       
//    std::unique_ptr<Test> ptr(new Test("ptr"));
//    ptr->printClassName();   
//    std::unique_ptr<Test> ptr1=std::move(ptr);
//    ptr1->SetClassName("ptr1");
//    ptr1->printClassName();
     
    return 0;
}
