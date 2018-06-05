#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decodificare.h"


/**
*This function is used to decrypring rows.
*@param *row1-the row were we search for the position of row2
*@param *row2-the character which we want to find
*@param key-reprezent the no with what we move the characters
*/
char decriptare(char *row1, char *row2,int key)
{
    int iterator=0;
    int ok=0;

    while(iterator<strlen(row1) && ok!=1)
    {
        if(row1[iterator]==row2[0])
        {
            ok=1;
        }
        else
        {
            iterator++;
        }
    }
    if(ok==1)
    {
        return row1[(strlen(row1)+iterator-key)%strlen(row1)];
    }
    else
    {
        return 0;
    }

}