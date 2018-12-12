#include <stdio.h>

/* copie l'entrée sur la sortie ; première version */
main()
{
    int c;

    c= getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
