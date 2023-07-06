#include "common.h"

/**
 * main - Entry pointz
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *pass = malloc(sizeof(char) * 5);
	char c[5] = {'H', 'o', 'l', 4, '\0'}, run[100];
	int z;

	for (z = 0; c[z]; z++)
		pass[z] = c[z];

	pass[z] = '\0';

	sprintf(run, "echo %s > 101-password", pass);
	system(run);

	return (0);
}
