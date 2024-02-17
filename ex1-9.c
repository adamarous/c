#include <stdio.h>

main()
{
    int in, c;

    c = 0;
    while ((in = getchar()) != EOF)
    {
        /*printf("%d\n", in);*/
        if (in == '\n')
            c = 0;
        if (in != ' ')
            putchar(in);
        if (in == ' ')
        {
            ++c;
            if (c <= 1)
                putchar(in);
        }
    }
}
