/**
 * greedy.c
 *
 * David Segura M
 *
 * Greedy algorithm for change.
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void)
{
// Definition of variables
int quarter  = 25;
int dimme    = 10;
int nickel   = 5;
int penny    = 1;
double change = 0;

//	Checks for the correct input 
	while (change <= 0)
	{
	printf("How much change is owed?: ");
	change = 100*GetDouble();
	}

	// Checks maximum number of quarter coins
	int quarter_coins = change/quarter;
	change = change - quarter_coins*25;
	// Checks maximum number of dimme coins
	int dimme_coins = change/dimme;
	change = change - dimme_coins*10;
	// Checks maximum number of nickel coins
	int nickel_coins = change/nickel;
	change = change - nickel_coins*5;
	// Asigns number of penny coins
	int penny_coins = change/penny;

	
	// Prints the total sum of coins
	printf("%d\n", quarter_coins + dimme_coins + nickel_coins + penny_coins);

return 0;
}
