#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int c, nc, nw, nl, state;

    state = OUT;
    nc = nw = nl = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        ++nl;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    /* pending printf and actually solving the exercise; check book*/
}
