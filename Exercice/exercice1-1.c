/* Exécutez le programme "bonjour, maître" sur votre ordinateur, en supprimant quelques parties du programme pour observer les erreurs." */

#include <stdio.h>

main()
   printf("bonjour, maître\n");

/* ERREURS :

exercice1-1.c:3:17: error: missing terminating > character
 #include <stdio.
                 ^
exercice1-1.c:3:10: fatal error: stdio.: Aucun fichier ou dossier de ce type
 #include <stdio.
          ^
compilation terminated.
exercice1-1.c:5:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^~~~
exercice1-1.c: In function ‘main’:
exercice1-1.c:6:4: error: expected declaration specifiers before ‘printf’
    printf("bonjour, maître\n");
    ^~~~~~
exercice1-1.c:8:1: error: unterminated comment
 /* ERREURS :
 ^
exercice1-1.c:6:4: error: expected ‘{’ at end of input
    printf("bonjour, maître\n");
    ^~~~~~
