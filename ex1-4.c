#include <stdio.h>

main()
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * 9.0/5.0 + 32.0;
        printf("%3.f %6.f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
