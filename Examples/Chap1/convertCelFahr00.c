#include <stdio.h>

/* affiche la table de conversion Fahrenheit-Celsius pour fahr = 0, 20, ..., 300 */
main()
{
    int fahr, celcius;
    int mini, maxi, intervalle;

    mini = 0; /* borne inférieure de la table */
    maxi = 300; /* borne supérieure */
    intervalle = 20; /* intervalle entre les valeurs en degrés Fahrenheit */

    fahr = mini;
    while (fahr <= maxi) 
    {
         celcius = 5 * (fahr-32) / 9;
	 printf("%d\t%d\n", fahr, celcius);
         fahr = fahr + intervalle;
    }
}
