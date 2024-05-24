#include <stdio.h>

/* define states inside or outside the word */
#define IN 1
#define OUT 0

main()
{
	/* declare for loops, character input, new letter, word array and word
	 * comparison array variables */
	int i, c, nl, state, cw[50];
	char w[50];

	/* initialize the word state to avoid random memory assignment to
	 * symoblic constant IN when used for the first time */
	state = OUT;

	/* initialize the word array and word comparison arrays; allowed length
	 * for words is limited by the length of the arrays; the word array
	 * will store characters but the word comparison array will store a
	 * count of each length, itself indicated by the array subindex */
	for (i = 1; i <= 50; ++i)
	{
		w[i] = '0';
		cw[i] = 0;
	}

	/* main loop; get input until EOF is reached */
	while ((c = getchar()) != EOF)
	{
		/* check if input is a letter; words are considered as only
		 * made up of letters */
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			/* if coming from outside a word, set the length and
			 * letter count to 0 */
			if (state == OUT)
			{
				w[0] = '0';
				nl = 0;
			}

			/* new letter addition and assignment to the word array
			 * with index starting at 1; warning if word surpasses
			 * set length */
			++nl;
			if (nl <= 50)
				w[nl] = c;
			else printf("too long a word, bad results expected\n");

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
				 * non-zero; if so, add one to w[0] as this
				 * subindex holds the length of the word*/
				for (i = 1; i <= 50; ++i)
					if (w[i] != '0')
						++w[0];

				/* store the length of the latest word into the
				 * word comparison array by comparing its
				 * length with 1-50 possible lengths
				 * represented as its index numbers */
				for (i = 1; i <= 50; ++i)
					if (i == w[0])
						++cw[i];
			}

			state = OUT;
		}
	}

	/* print results in a histogram */
	for (i = 1; i <= 50; ++i)
	{
		printf("%d\t|\t", i);

		if (cw[i] != 0)
		{
			int k;
			for (k = 1; k <= cw[i]; ++k)
				putchar('#');
		}

		putchar('\n');
	}

	/* sort through the comparison array to check for the length with the
	 * most words and store it in cw[0] */
	cw[0] = 0;
	for (i = 1; i <= 50; ++i)
		if (cw[i] > cw[0])
			cw[0] = cw[i];
	printf("\nthe length with the most words was %d\n", cw[0]);
}
