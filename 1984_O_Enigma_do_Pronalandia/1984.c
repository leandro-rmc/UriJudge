#include <stdio.h>

int main()
{
    unsigned long long numero_encontrado;
    scanf("%llu", &numero_encontrado);
	
	//Divide o número encontrado por 10 e imprime o resto do resultado.
	//546 / 10 = 54 com resto 6
	//54 / 10 = 5 com resto 4
	//5 / 10 = 0 com resto 5
    while (numero_encontrado > 0){
        printf("%llu", numero_encontrado % 10);
        numero_encontrado /= 10;
    }
	
    printf("\n");
    return 0;
}