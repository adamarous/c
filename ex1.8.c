#include <stdio.h>

main()
{
	/* new blank, new tab and new line counter declaration and initlisation */
	long int nb, nt, nl;
	nb = 0;
	nt = 0;
	nl = 0;

	/* character input checker */
	int c; 

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}

	printf("Blanks\tTabs\tNewlines\n");
	printf("%ld\t%ld\t%ld\n", nb, nt, nl);
}
