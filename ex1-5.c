#include <stdio.h>

main()
{
    float fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3.0f %6.2f\n", fahr, ((5.0/9.0) * (fahr - 32.0)));
}
