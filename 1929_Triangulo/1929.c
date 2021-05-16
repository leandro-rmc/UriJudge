#include <stdio.h>

int main()
{
    int i, j, aux;
    int lados_triangulo[4];
    scanf("%i %i %i %i", &lados_triangulo[0], &lados_triangulo[1], &lados_triangulo[2], &lados_triangulo[3]);

    //Bubble Sort para organizar o vetor em ordem crescente
	//Apesar de ser um algoritmo de complexidade O(n²), há pouquíssimos dados para serem ordenados
    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 2; j++){
            if (lados_triangulo[j] > lados_triangulo[j+1]){
                aux = lados_triangulo[j+1];
                lados_triangulo[j+1] = lados_triangulo[j];
                lados_triangulo[j] = aux;
            }
        }
    }
	
    //Ignoro o lado menor ou o maior e escolho os dois menores restantes para comparar com o maior restante.
    //Não tenho certeza ainda se daria certo ignorá-los dessa forma, porém os testes pelo uDebug deram positivos.
    //Acho que pode falhar em determinados casos, mas vou tentar.
    if (lados_triangulo[1] + lados_triangulo[2] > lados_triangulo[3] || lados_triangulo[0] + lados_triangulo[1] > lados_triangulo[2])
        printf("%c\n",'S');
    else
        printf("%c\n",'N');
    return 0;
}