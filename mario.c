/**
 * hello.c
 *
 * David Segura M
 * 
 * Prints a right aligned mario ladder.
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void)
{
	int  height = 0;                  
	bool correct = 0;
	
	
	// Checks that the user entry is a positive number below 23
	while (correct==false)
		{
		
		printf("Height: ");
		height = GetInt();

		correct = ( height >= 0 && height <= 23 ) ? true : false;
		
		}

	// creates columms  and breaklines
	for (int i=1; i <= height; i++)
	{	
		// Inserts the necesary spaces to align
  		for (int k = height-i; k >0 ; k--)
  		{
  			printf(" ");
  		}
  		// creates rows
		for (int j=0; j < i; j++)
		{
			printf("#");
		}
		printf("#\n");
	}
			
return 0;
}
