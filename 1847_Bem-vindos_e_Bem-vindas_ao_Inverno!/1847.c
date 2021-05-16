#include <stdio.h>

/*
Caminho 1-1: Se a temperatura desceu do 1º para o 2º dia, mas subiu ou permaneceu constante do 2º para o 3º, as pessoas ficam felizes.
Caminho 1-2-1: Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º menos do que descera do 1º para o 2º, as pessoas ficam felizes.
Caminho 1-2-2: Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º no mínimo o tanto que descera do 1º para o 2º, as pessoas ficam tristes.
Caminho 2-1-1: Se a temperatura subiu do 1º para o 2º dia, mas desceu ou permaneceu constante do 2º para o 3º, as pessoas ficam tristes.
Caminho 2-1-2-1: Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º menos do que subira do 1º para o 2º, as pessoas ficam tristes.
Caminho 2-1-2-2: Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º no mínimo o tanto que subira do 1º para o 2º, as pessoas ficam felizes.
Caminho 2-2-1: Se a temperatura permaneceu constante do 1º para o 2º dia, as pessoas ficam felizes se subiu do 2º para o 3º dia.
Caminho 2-2-2: Se a temperatura permaneceu constante do 1º para o 2º dia, as pessoas ficam tristes se desceu do 2º para o 3º dia.
*/

int main()
{
    int temperatura_primeiro_dia, temperatura_segundo_dia, temperatura_terceiro_dia;
    scanf("%i %i %i",&temperatura_primeiro_dia,&temperatura_segundo_dia, &temperatura_terceiro_dia);
	
	//Caminho 1
    if (temperatura_primeiro_dia > temperatura_segundo_dia){
		
		//Caminho 1-1
        if (temperatura_segundo_dia <= temperatura_terceiro_dia){
            printf(":)\n");
		}
		
        //Caminho 1-2
		else{
			//Caminho 1-2-1
            if(temperatura_segundo_dia - temperatura_terceiro_dia < temperatura_primeiro_dia - temperatura_segundo_dia)
                printf(":)\n");
			//Caminho 1-2-2
            else
                printf(":(\n");
		}
		
    }
	
	//Caminho 2
    else{
		
		//Caminho 2-1
        if (temperatura_primeiro_dia < temperatura_segundo_dia){
			
			//Caminho 2-1-1
            if (temperatura_segundo_dia >= temperatura_terceiro_dia)
                printf(":(\n");
				
			//Caminho 2-1-2
            else{
				//Caminho 2-1-2-1
                if(temperatura_terceiro_dia - temperatura_segundo_dia < temperatura_segundo_dia - temperatura_primeiro_dia)
                    printf(":(\n");
				//Caminho 2-1-2-2
                else
                    printf(":)\n");	
			}
			
        }
		
		//Caminho 2-2
        else{
			
			//Caminho 2-2-1
            if (temperatura_segundo_dia < temperatura_terceiro_dia)
                printf(":)\n");
            //Caminho 2-2-2
			else
                printf(":(\n");
				
        }
    }

    return 0;
}