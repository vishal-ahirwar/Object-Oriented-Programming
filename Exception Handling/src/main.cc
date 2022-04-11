#include <stdio.h>
#include <iostream>

class myE : public std::exception
{
public:
    const char *what()
    {
        return "Unexpected Error!\n";
    };
};

void print()
{
    while (true)
    {

        if (int c = rand() % 1000 + 1 != 5)
        {
            printf("%d, ", c);
            if (c == 1)
            {
                throw 1;
            };
        }
        else
        {
            throw myE();
        };
    }
}
int main(void)
{
    srand(time(0));

    try
    {
        print();
    }
    catch (myE &str)
    {
        std::cerr << "\n[error] code : " << str.what() << "\n";
    }
    catch (...)
    {
        printf("ERROR");
    }

    printf("shtting down program ...\n");

    return 0;
}