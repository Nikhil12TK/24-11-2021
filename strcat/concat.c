#include"header.h"
void concatstr(char *dest,char *src) 
       { 
           int i,j;
                    for( j=0;*(dest+j)!='\0';j++);
                for( i=0;*(src+i)!='\0';i++,++j)
                *(dest+j)=*(src+i);
                *(dest+j)='\0'; 
                printf("%s\n",dest);
       int c=0;
     for( i=0;*(dest+i)!='\0';i++)
          c++;
          printf("the length of second string is :%d\n",c);
    }
