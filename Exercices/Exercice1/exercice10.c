#include <stdio.h>

/* visualise les tab, retour en arrière et backslash */

main()
{
    int c, e;
    e = 92;
    c = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == 92)
            printf("\\");
        putchar(c);
    }
}
