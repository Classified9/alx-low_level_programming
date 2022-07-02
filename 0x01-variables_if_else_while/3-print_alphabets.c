#include <stdio.h>

int main(void) /*Returns: 0 if error*/
{
	char alpha1; /*First cap alphabet*/
	char alpha2; /*Second cap alphabet*/

	for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
		putchar(alpha1);
	for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2++)
		putchar(alpha2);
	printf("\n");
	return (0);
}
