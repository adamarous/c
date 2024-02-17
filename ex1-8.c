#include <stdio.h>

main()
{
    int in, c, bk_c, tb_c, nl_c;
    char bk, tb, nl;

    bk = ' ';
    tb = '\t';
    nl = '\n';

    c = 0;
    bk_c = 0;
    tb_c = 0;
    nl_c = 0;
    while ((in = getchar()) != EOF)
    {
        if (in == bk)
        {
            ++c;
            ++bk_c;
        }
        if (in == tb)
        {
            ++c;
            ++tb_c;
        }
        if (in == nl)
        {
            ++c;
            ++nl_c;
        }
    }

    printf("%d\n%d\n%d\n%d\n", c, bk_c, tb_c, nl_c);
}
