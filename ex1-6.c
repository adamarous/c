#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF)
        printf("\nEOF NOT FOUND: %d\n", c != EOF);

    printf("EOF FOUND: %d\n", c != EOF);
}
