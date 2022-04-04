#include<stdio.h>
#include<stdlib.h>
const   int len(const char*str)
{
    short count=0;
    while(str[count]!='\0')
    {
        ++count;
    };
    return count;
};


 char* lSubString(const char*str)
{
    int index=0;
    int maxOCC=0;
    int length=len(str);
    printf("len %d",length);
    char* res =(char*)malloc(sizeof(char)*length);

    while(str[index]!='\0') 
    {
        const char ex=str[index];
        for(int i=index;str[i]!='\0';++i)
        {
            if(ex==str[i])
            {
                if(++maxOCC>=2)
                {
                    *(res++)=ex;
                    printf("%c",ex);

                };

            };
        };

        ++index;
    };
    printf("%c",*res);
    return res;
};

int main(void)
{
    char*res=lSubString("aasasasas");
    printf("%s",res);
    free(res);
    return 0;
}