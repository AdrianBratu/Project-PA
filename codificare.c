#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "codificare.h"
/**
*This function is used to give us the key.
*@param *row1-the row were we search for the position of row2
*@param *row2-the character which we want to find
*/

int deplasare(char *row1, char *row2)
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
        return iterator;
    }
    else
    {
        return 0;
    }
}
/**
*This function is used tell us if the *character is in *row1
*@param *row1-the row were we search for the position of row2
*@param *character-the character which we want to find
*/

int cautare(char *row1, char *character)
{
    int iterator=0;
    int ok=0;
    while((iterator<strlen(row1))&& (ok ==0))
    {
        if(row1[iterator]==character[0])
        {
            ok=1;
        }
        iterator++;
    }
    if(ok==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/**
*This function is used to encrypring rows.
*@param *row1-the row were we search for the position of row2
*@param *row2-the character which we want to find
*@param key-reprezent the no with what we move the characters
*/

char criptare(char *row1, char *row2,int key)
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
        return row1[(iterator+key)%strlen(row1)];
    }
    else
    {
        return 0;
    }

}