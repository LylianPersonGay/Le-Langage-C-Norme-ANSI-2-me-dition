#include <stdio.h>

/* affiche les séries d'espaces par 1 espace */

main()
{
    int c, space;

    c = space = 0;

    while ((c = getchar()) != EOF)
    {
       if (c == ' ')
            if (space == 0) /* si space est faux */
            {   
                space = 1;
                putchar(c);
            }
        if (c != ' ')
        {
            space = 0;
            putchar(c);
        }

    }
}
