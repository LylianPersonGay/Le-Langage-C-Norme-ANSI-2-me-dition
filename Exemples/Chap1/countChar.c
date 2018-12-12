#include <stdio.h>

/* compte les charactères en entrée : 1ère version */

main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
