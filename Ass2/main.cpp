#include <iostream>
#include <string.h>
#include "stdio.h"

using namespace std;

void* FirstReverse(char *str)
{
    return strrev(str);
}


int main()
{
    char str[20];
    while(1)
    {
        cout << "Input:" ;
        gets(str);
        FirstReverse(str);
        cout << "Output:" << str << endl << endl;
    }
    return 0;
}
