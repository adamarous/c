#include <stdio.h>

#define TAB '\t'
#define BACK '\b'
#define SLASH '\\'

main()
{
    int i;

    while ((i = getchar()) != EOF)
    {
        if (i == TAB)
            printf("\\t");
        if (i == BACK)
            printf("\\b");
        if (i == SLASH)
            printf("\\\\");
        if (i != TAB)
            if (i != BACK)
                if (i != SLASH)
                    putchar(i);
    }
}
