#include <stdio.h>

#define LOWER 0 /* lower limit temp */
#define UPPER 300 /* upper limit temp */
#define STEP 20 /* step size */

/* printf fahrenheit to celsius table */
main()
{
	int fahr;

	printf("f to c temp conv\n");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3d%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
