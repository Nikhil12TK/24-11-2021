#include"header.h"
void main()
{
    char str[MAX_SIZE], word[MAX_SIZE];
    /* Input string and word from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to be searched: ");
    gets(word);
    check(str,word);
    
}
