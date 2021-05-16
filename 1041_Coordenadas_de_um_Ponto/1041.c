#include <stdio.h>

int main()
{
    float coordenada_x, coordenada_y;
    scanf("%f %f", &coordenada_x, &coordenada_y);
	
	//Se X e Y forem iguais a 0, só pode ser a origem
    if (coordenada_x == 0 && coordenada_y == 0)
        printf("Origem\n");
    else
		//Sempre que X for 0, mas o Y não, estará sempre no eixo Y
        if (coordenada_x == 0)
            printf("Eixo Y\n");
        else
			//A mesma lógica do caso acima
            if(coordenada_y == 0)
                printf("Eixo X\n");
            else{
				//Matemática básica envolvendo o plano cartesiano
				//Se chegou aqui é porque o ponto não está em nenhum lugar dos casos acima
				
				//Caso x e y sejam maiores do que 0, só pode estar no quadrante 1
                if(coordenada_x > 0 && coordenada_y > 0)
                    printf("Q1\n");
				//Mesma lógica vai se aplicando aos outros pontos...
                if(coordenada_x < 0 && coordenada_y > 0)
                    printf("Q2\n");
                if(coordenada_x < 0 && coordenada_y < 0)
                    printf("Q3\n");
                if(coordenada_x > 0 && coordenada_y < 0)
                    printf("Q4\n");
            }

    return 0;
}