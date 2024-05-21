#include <stdio.h>

main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 20;
	upper = 300;
	step = 10;

	printf("f to c temp conversion\n");
	while (lower <= upper)
	{
		fahr = lower;
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f%6.1f\n", fahr, celsius);
		lower = lower + step;
	}
}
