#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;
 
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		alpha = putchar(alpha);
 
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		alpha = putchar(alpha);
 
	putchar('\n');
 
	return (0);
}
