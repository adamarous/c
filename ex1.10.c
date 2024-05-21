#include <stdio.h>

main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			printf("\\t");
		/* even though backspaces are seemingly not read, this seems correct according to the internet */
		if (c == '\b')
			printf("\\b");
		if (c == '\\')
			printf("\\");
	}
}
