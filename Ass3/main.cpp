#include <iostream>
#include <string.h>
#include "stdio.h"

using namespace std;

void* AlphabetSoup(char *str)
{

    int a,b,c;
    char d;
    c=strlen(str);
    for(a=0; a<c-1;a++)
    {
        for(b=a+1;b<c;b++)
        {
            if(str[a]>str[b])
            {
                d=str[a];
                str[a]=str[b];
                str[b]=d;
            }
        }
    }

    return str;
}

int main()
{
    char str[20];
    while(1)
    {
        cout << "Input:";
        gets(str);
        AlphabetSoup(str);
        cout <<"Output:" << str << endl << endl;
    }
    return 0;
}
