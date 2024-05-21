#include <stdio.h>

/* return input with reduced blanks */
main()
{
	/* char input and blank count declaration */
	int c;
	long int nb;

	/* blank counter initialization */
	nb = 0;
	while ((c = getchar()) != EOF)
	{
		/* if a newline is input, the counter for blanks resets as there's a new character string incoming */
		if (c == '\n')
			nb = 0;
		/* if it's not a blank, then the counter is reset to 0 */
		if (c != ' ')
			nb = 0;
		/* if it's a blank, then the blank counter increases to keep track of the amount of blanks */
		if (c == ' ')
			++nb;
		/* if the previous counter goes beyond 1, the blank won't be output */
		if (nb <= 1)
		{
			printf("%d", c); /* debug, proof-of-concept */
			printf("\n"); /* debug */
		}
	}
}
