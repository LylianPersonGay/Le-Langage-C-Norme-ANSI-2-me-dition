#include <stdio.h>

/* compte les espaces, tabulations et fins de lignes */
main()
{
    long ns, tab, nl;
    int c;
    
    ns = tab = nl = 0;
    c = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++ns;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++nl;
    }

    printf("%ld.space, %ld.tab, %ld.line\n", ns, tab, nl);
}
