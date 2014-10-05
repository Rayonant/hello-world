#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void)
{
	int  height = 0;
	bool correct=0;
	//Checks that the user entry is a positive number below 23
while (correct==false)
{
		printf("Ingrese la altura de la pirámide:");
		height=GetInt();

	if (height < 0 || height<23 || height != integer)
		printf("Valor incorrecto,ingreselo de nuevo\n");
	else
		correct=true;
}
		// creates rows and breaklines
			for (int i=0; i < height; i++)
					{
  					// creates columns
						for (int j=0; j <= i; j++)
							{
								printf("#");
							}
						printf("#\n");
					}
	return 0;
}
