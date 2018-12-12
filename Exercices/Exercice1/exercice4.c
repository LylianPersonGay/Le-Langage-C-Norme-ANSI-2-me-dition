#include <stdio.h>

main()
{
    printf("----Fahr to Celcius----\n");

    float   celcius, fahr;
    int min, max, intervalle;

    fahr = min = 0;
    max = 300, intervalle = 20;

    while (fahr <= max)
    {
        celcius = (fahr -32) /1.8;
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr += intervalle;
    }
}
