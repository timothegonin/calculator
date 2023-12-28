#include <stdio.h>
#include <stdlib.h>

int main()
{
    int premierNombre, deuxiemeNombre, resultat = 0;
    printf("CALCULATOR\n");
    printf("\nEntrez un premier nombre : ");
    scanf("%d", &premierNombre);
    printf("\nEntre un deuxieme nombre : ");
    scanf("%d", &deuxiemeNombre);
    resultat = premierNombre + deuxiemeNombre;
    printf("Le resultat de %d + %d est : %d.", premierNombre, deuxiemeNombre,resultat);

    return 0;
}
