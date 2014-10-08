/**
 * hello.c
 *
 * David Segura M
 *
 * Prints hello "name".
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
	string name;
	printf("¿Cuál es tu nombre?\n");
	name = GetString();
	printf("hello,%s\n", name);
	return 0;
}
