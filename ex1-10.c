#include <stdio.h>

main()
{
    int i;

    while ((i = getchar()) != EOF)
    {
        if (i == '\t')
            printf("\\t");
        if (i == '\b')
            printf("\\b");
        if (i == '\\')
            printf("\\");
        if (i != '\t')
            if (i != '\b')
                if (i != '\\')
                    putchar(i);
    }
}
