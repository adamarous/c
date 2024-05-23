#include <stdio.h>

/* define states inside or outside the word */
#define IN 1
#define OUT 0

main()
{
	/* declare for loops, character input, word array and word comparison
	 * array variables */
	int i, c, w[50], cw[50];

	/* initialize the word state to avoid random memory assignment to
	 * symoblic constant IN */
	state = OUT;

	/* initialize the word array with 0s for non-letters, and the word
	 * comparison array with allowed lengths; allowed lengths for the word
	 * comparison array are as long as the word array itself, as it will
	 * contain the max number of letters per word; word[0] not initialized
	 * because it's never used until assigned to 0 for the first time */
	for (i = 1; i <= 50; ++i)
	{
		w[i] = 0;
		cw[i] = i;
	}

	/* main loop; get input until EOF is reached */
	while ((c = getchar()) != EOF)
	{
		/* check if input is a letter; words are considered as only
		 * made up of letters */
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			/* the word array takes each character from the word
			 * beginning at subindex 1 all the way up to subindex
			 * 50; subindex 0 stores the length of the word further
			 * on */
			if (state == OUT)
				w[0] = 0;
			for (i = 1; i <= 50; i++)
				/* wip */
				w[c - (c - 1)] = c;
			state = IN;
		}
		else
		{
			/* coming from inside a word, any other input completes
			 * the word */
			if (state == IN)
			{
				/* sort through the word array subindexes;
				 * check if they contain letters by being
				 * non-zero */
				for (i = 1; i <= 50; ++i)
					if (w[i] != 0)
						++w[0];

				/* store the length of the latest word into the
				 * word comparison array */
				for (i = 1; i <= 50; ++i)
					if (cw[i] == w[0])
						cw[i] = w[0];
			}
			state = OUT;
		}
	}
}
