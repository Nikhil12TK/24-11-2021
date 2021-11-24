#include"header.h"
void main()
{
    char str[40];
    int l=0;
printf("Enter string:\n");
    gets(str);
    l=length(str);
    palindrome(str,l);
}
