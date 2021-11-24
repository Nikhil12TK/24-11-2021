#include"header.h"
int length(char *s)
{
    int n=0;
for(int i=0;s[i]!='\0';i++)
    {
        n++;
    }
    return n;
}
