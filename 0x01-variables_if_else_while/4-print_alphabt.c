#include <stdio.h>
#include <stdlib.h>

/**
  * main - describe what the function does here
  * @variable_name: variable description
  *
  * Return: return value
  */

int main(void)

{
	char alpha;
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha == 'e' || alpha == 'q')
		continue;

	putchar(alpha);
	}

	putchar('\n');
	return (0);
}
