#include <stdio.h>
#define DEDANS 1
#define DEHORS 0


/* affiche un mot par ligne en std */

main()
{
    int c = 0;
    int etat = DEHORS;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
        else
            putchar(c);
    }
}
