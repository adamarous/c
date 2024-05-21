#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 20;
	upper = 300;
	step = 10;

	printf("c to f temp conversion\n");
	while (lower <= upper)
	{
		celsius = lower;
		fahr = celsius / (5.0 / 9.0) - 32.0;
		printf("%3.0f%6.0f\n", celsius, fahr);
		lower = lower + step;
	}
}
