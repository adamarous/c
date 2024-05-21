#include <stdio.h>

/* dumbed-down version of the unix wc program */
/* this could probably be easily bypassable by using escape sequences not
 * included in this sepecific program */

#define OUT 0 /* outside the word */
#define IN 1 /* inside the word */

main()
{
	/* input character, new character, new word and new line counter
	 * declaration */
	int c, nc, nw, nl, state;

	/* counters initilization */
	nc = nw = nl = state = OUT;

	while ((c = getchar()) != EOF)
	{
		/* all new characters count in */
		++nc;

		/* characters that wouldn't be part of a word */
		if (c == ' ' || c == '\t' || c == '\n')
		{
			/* if coming from a word, increase the word counter */
			if (state == IN) ++nw;

			/* change the state to outside the word as no one word
			 * has two spaces */
			state = OUT;

			/* if it's a newline, increase the newline counter */
			if (c == '\n') ++nl;
		}
		/* if none of the set conditions to be outside a word are met,
		 * then you're inside the word */
		else state = IN;
	}
	printf("characs\twords\tnewlines\n");
	printf("%d\t%d\t%d\n", nc, nw, nl);
}
