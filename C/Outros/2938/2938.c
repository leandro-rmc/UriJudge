#include <stdio.h>

int main()
{
    int pesoJacana, pesoComida, totalPlantas, i, comidaNasPlantas;
    scanf("%i",&pesoJacana);
    scanf("%i",&pesoComida);
    scanf("%i",&totalPlantas);
    int pesoSuportadoPlantas[totalPlantas];
    comidaNasPlantas = 0;
    for (i = 0; i < totalPlantas; i++){
        scanf("%i", &pesoSuportadoPlantas[i]);
        if (pesoJacana + pesoComida > pesoSuportadoPlantas[i]) {
            pesoComida = pesoComida - (pesoComida + pesoJacana - pesoSuportadoPlantas[i]);
            if (pesoComida < 0)
                break;
            if (i == 0)
                continue;
            comidaNasPlantas++;
            if (pesoComida == 0)
                break;
        }
    }
    printf("%i\n",comidaNasPlantas);
    return 0;
}