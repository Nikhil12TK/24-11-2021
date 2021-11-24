#include"header.h"
void check(char *str,char *word)
    /* Run loop from start to end of string */
{
    int index = 0,found=0,i;
    while(str[index] != '\0')
    {

        /* If first character of word matches with the given string */
        if(str[index] == word[0])
        {
            /* Match entire word with current found index */
            i=0;
            found = 1;
            while(word[i] != '\0')
            {
                if(str[index + i] != word[i])
                {
                    found = 0;
                    break;
                }

                i++;
            }
        }
        
        /* If the word is found then get out of loop */
        if(found == 1)
        {
            break;
        }

        index++;
    }
    if(found == 1)
    {
        printf("\n'%s' is found at index %d.", word, index);
    }
    else
    {
        printf("\n'%s' is not found.", word);
    }
    
   
}
