#include <stdio.h>

main()
{
    int c = 0;

    while (c = getchar() != EOF)
        printf("%d\n", c);
}
