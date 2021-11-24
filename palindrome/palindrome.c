#include"header.h" 
void palindrome(char *s,int m)
{
    int flag=1;
    for(int i=0;i< m/2;i++)
    {
        if( s[i] != s[m-1-i] )
        {
            flag=0;
            break;
        }
    }
            if(flag==1)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
}
