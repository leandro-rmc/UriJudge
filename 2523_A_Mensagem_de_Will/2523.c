#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letras_alfabeto_ingles[28], letra_de_cada_lampada[3];
    int qt_lampadas_piscadas, i;

	//Gets é vulnerável a Buffer Overflow, já que ele consome tudo sem se preocupar com tamanho. Uso apenas didático. 
    while (gets(letras_alfabeto_ingles) != NULL){
        scanf("%i", &qt_lampadas_piscadas);
		
        for(i = 1; i <= qt_lampadas_piscadas; i++){
            scanf("%s", letra_de_cada_lampada);
            printf("%c", letras_alfabeto_ingles[atoi(letra_de_cada_lampada)-1]);
        }
		
        printf("\n");
        gets(letras_alfabeto_ingles);
    }

    return 0;
}