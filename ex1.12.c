#include <stdio.h>

/* print the input one word per line */

/* define the states outside and inside a word */
#define IN 1
#define OUT 0

main()
{
	/* declare the character input and word state variables */
	int c, state;

	/* initialize the state to avoid possible random memory assignment to
	 * symbolic constant IN */
	state = OUT;
	while ((c = getchar()) != EOF)
	{
		/* check for characters not part of a word */
		if (c == ' ' || c == '\t' || c == '\n')
		{
			/* if coming from a word, make a newline to satisfy the 
			 * one word-per-line requirement*/
			if (state == IN)
				putchar('\n');
			state = OUT;
		}
		else 
		{
			/* if the character is not any of the above, it's
			 * assumed to be inside a word; thus, put out the
			 * character */
			state = IN;
			putchar(c);
		}
	}
}
