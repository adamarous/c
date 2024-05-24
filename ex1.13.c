#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int i, c, nl, state;
	char w[50];
	int cw[50];

	state = OUT;
	for (i = 0; i <= 50; ++i)
	{
		w[i] = '0';
		cw[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if (state == OUT)
			{
				state = IN;
				nl = 0;
			}
			++nl;
			if (nl <= 50)
				w[nl] = c;
			else printf("too long a word, bad results expected\n");
		}
		else
		{
			if (state == IN)
			{
				for (i = 1; w[i] == '0'; ++i)
					++cw[0];
				for (i = 1; i != 50; ++i)
					if (i == cw[0])
						++cw[i];
			}
			state = OUT;
		}
	}

	for (i = 1; i <= 50; ++i)
	{
		printf("%d\t|", i);
		if (cw[i] != 0)
		{
			putchar('\t');
			int k;
			for (k = 1; k <= cw[i]; ++k)
				putchar('#');
		}
		putchar('\n');
	}
}
