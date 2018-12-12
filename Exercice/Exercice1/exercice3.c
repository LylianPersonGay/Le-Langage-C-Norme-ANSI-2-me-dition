#include <stdio.h>

main()
{
    printf("----Fahr to celcius----\n");

    float   fahr, celcius;
    int     mini, maxi, intervalle;

    mini = 0;
    maxi = 300;
    intervalle = 20;

    fahr = mini;
    while (fahr <= maxi) 
    {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + intervalle;
    }
}
