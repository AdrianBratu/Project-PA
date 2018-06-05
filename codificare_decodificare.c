#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "codificare.h"
#include "decodificare.h"
/**
*This is the main function
*@author Bratu Florin-Adrian 
*@date 01.06.2018
*/
int main ()
{
	int alg_obt;
	printf("Alegeti algoritmul dorit:\n1.Codificare\n2.Decodificare\n");
	scanf("%d\n", &alg_obt);
		printf("Introduceti sirul:");
	switch(alg_obt){
		case 1 : {
		    char *row1 = (char*)malloc (12 * sizeof (char));
			char *row2 = (char*)malloc (12 * sizeof (char));
			char *row3 = (char*)malloc (12 * sizeof (char));
			char *row4 = (char*)malloc (12 * sizeof (char));
			char *row5 = (char*)malloc (12 * sizeof (char));
			char row6;
			char *row7 = (char*)malloc (100 * sizeof (char));
			char *copy_row7;
			

			int iterator=0;
			int length=0;
			int key;

			memcpy(row1,"1234567890",sizeof("1234567890"));
			memcpy(row2,"qwertyuiop",sizeof("qwertyuiop"));
			memcpy(row3,"asdfghjkl",sizeof("asdfghjkl"));
			memcpy(row4,"zxcvbnm",sizeof("zxcvbnm"));
			memcpy(row5,",. !?;:",sizeof(",. !?;:"));
 			
			
			
			gets(row7);
			
			copy_row7=row7;
			printf("Sirul codificat este:");

			if(cautare(row1,row7)==1)
			{
				key=deplasare(row1,row7);
				
			}
			else if(cautare(row2,row7)==1)
			{
				key=deplasare(row2,row7);
				
			}
			else if(cautare(row3,row7)==1)
			{
				key=deplasare(row3,row7);
				
			}
			else if(cautare(row4,row7)==1)
			{
				key=deplasare(row4,row7);
				
			}

			length=strlen(row7);

			while(iterator<length)
			{
				if(cautare(row1,row7)==1)
				{
					row6=criptare(row1,row7,key);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				else if(cautare(row2,row7)==1)
				{
					row6=criptare(row2,row7,key);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				else if(cautare(row3,row7)==1)
				{
					row6=criptare(row3,row7,key);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				else if(cautare(row4,row7)==1)
				{
					row6=criptare(row4,row7,key);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				else if(cautare(row5,row7)==1)
				{
					row6=criptare(row5,row7,0);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}

			}

			free(row1);
			free(row2);
			free(row3);
			free(row4);
			free(row5);
			free(copy_row7);

			return 0;
			
		}
		case 2 :{
			char *row1 = (char*)malloc (12 * sizeof (char));
			char *row2 = (char*)malloc (12 * sizeof (char));
			char *row3 = (char*)malloc (12 * sizeof (char));
			char *row4 = (char*)malloc (12 * sizeof (char));
			char *row5 = (char*)malloc (12 * sizeof (char));
			char row6;
			char *row7 = (char*)malloc (100 * sizeof (char));
			char *copy_row7;
			

			int iterator=0;
			int length=0;
			int key;

			memcpy(row1,"1234567890",sizeof("1234567890"));
			memcpy(row2,"qwertyuiop",sizeof("qwertyuiop"));
			memcpy(row3,"asdfghjkl",sizeof("asdfghjkl"));
			memcpy(row4,"zxcvbnm",sizeof("zxcvbnm"));
			memcpy(row5,",. !?;:",sizeof(",. !?;:"));
			
			
			
			gets(row7);
			
			
			copy_row7=row7;
			printf("Sirul decodificat este:");

			if(cautare(row1,row7)==1)
			{
				key=deplasare(row1,row7);
				
			}
			else if(cautare(row2,row7)==1)
			{
				key=deplasare(row2,row7);
				
			}
			else if(cautare(row3,row7)==1)
			{
				key=deplasare(row3,row7);
				
			}
			else if(cautare(row4,row7)==1)
			{
				key=deplasare(row4,row7);
				
			}

			length=strlen(row7);

			while(iterator<length)
			{
				if(cautare(row1,row7)==1)
				{
					row6=decriptare(row1,row7,key);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				else if(cautare(row2,row7)==1)
				{
					row6=decriptare(row2,row7,key);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				else if(cautare(row3,row7)==1)
				{
					row6=decriptare(row3,row7,key);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				else if(cautare(row4,row7)==1)
				{
					row6=decriptare(row4,row7,key);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				else if(cautare(row5,row7)==1)
				{
					row6=decriptare(row5,row7,0);
					printf("%c",row6);

					row7=row7+1;
					iterator++;
				}
				

			}

			free(row1);
			free(row2);
			free(row3);
			free(row4);
			free(row5);
			free(copy_row7);

			return 0;
			
		}
		
	}
	
}