#include <stdio.h>

int main()
{
    int valor_1, valor_2, qt_somas_necessarias;
	
	//A quantidade de somas necessárias sempre será de, no mínimo, 1
    qt_somas_necessarias = 1;
    scanf("%i",&valor_1);
	
	//Repete a entrada do valor_2 até que ele seja maior do que o valor_1
    do
        scanf("%i",&valor_2);
    while (valor_2 <= valor_1);
	
	//Conta quantas somas são necessárias até que o valor_1 ultrapasse o valor_2 
    while (valor_2 > valor_1 * qt_somas_necessarias + qt_somas_necessarias)
        qt_somas_necessarias++;
		
    printf("%i\n",qt_somas_necessarias);
    return 0;
}