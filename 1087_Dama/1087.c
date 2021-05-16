#include <stdio.h>

int main()
{
    int coordenada_x1, coordenada_y1, coordenada_x2, coordenada_y2, distancia_x,distancia_y;
    scanf("%i %i %i %i", &coordenada_x1, &coordenada_y1, &coordenada_x2, &coordenada_y2);
	
	//Para quando as coordenadas inseridas forem todas 0
    while ((coordenada_x1 + coordenada_y1 + coordenada_x2 + coordenada_y2) != 0){
		
		//Calcula a distância do ponto x1 até x2 e y1 até y2
        distancia_x = coordenada_x1 - coordenada_x2;
        distancia_y = coordenada_y1 - coordenada_y2;
		
		//Se qualquer uma das duas distâncias forem iguais a zero, ou seja, a peça não ter que mover nada em X ou Y
        if (distancia_x == 0 || distancia_y == 0){
			
			//Verifica se a peça vai ficar parada (tanto em X quanto em Y)
            if (distancia_x == 0 && distancia_y == 0 || (coordenada_x1 == coordenada_x2) && (coordenada_y1 == coordenada_y2))
                printf("0\n");
            else
				//Se chegou até aqui é porque a peça só vai precisar se movimentar ou em X ou em Y
                printf("1\n");
        }
        else{
			//Se a distância de x1 para x2 for a mesma de y1 até y2, a peça vai se movimentar diagonalmente
			//A multiplicação é apenas para remover o sinal negativo
            if(distancia_x * distancia_x == distancia_y * distancia_y)
                printf("1\n");
            else
				//Precisará se movimentar em X e em Y, cada um uma distância diferente
                printf("2\n");
		}
		scanf("%i %i %i %i", &coordenada_x1, &coordenada_y1, &coordenada_x2, &coordenada_y2);
    }
    return 0;
}