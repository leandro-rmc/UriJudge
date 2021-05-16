#include <stdio.h>
#include <stdlib.h>

//tamanho_campo_x e tamanho_campo_Y NÃO foram utilizados nesse algorítmo
//Possivelmente eles são necessários em uma versão mais eficiente desse algoritmo
int tamanho_campo_X, tamanho_campo_Y, preco_deswevileutssen, qt_mensagens, gasto_total;
char mensagem_conan;

struct schweisen{
    int quantidade;
    int x;
    int y;
};
typedef struct schweisen schweisen;
schweisen *lista_schweisens;
int qt_coordenadas_com_schweisen = 0;

//Busca na lista de schweisens se algum deles está em uma coordenada específica
int is_coordenada_na_lista(int x, int y){
    int i;
    for (i = 0; i <= qt_coordenadas_com_schweisen - 1; i++){
        if (lista_schweisens[i].x == x && lista_schweisens[i].y == y){
            return i;
        }
    }
    return -1;
}

//Retorna o maior de 2 números
int maior(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

//Retorna o menor de 2 números
int menor(int a, int b){
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
	int i, j, r;
	int ponto_x_schweisen, ponto_y_schweisen, ponto_z_schweisen, ponto_w_schweisen;
	int qt_schweisens_encontrados, posicao_x_schweisen, posicao_y_schweisen;
	
    scanf("%i %i %i", &tamanho_campo_X, &tamanho_campo_Y, &preco_deswevileutssen);
    while (tamanho_campo_X != 0 && tamanho_campo_Y != 0 && preco_deswevileutssen != 0){
        qt_coordenadas_com_schweisen = 0;
        scanf("%i",&qt_mensagens);
        free(lista_schweisens);
        lista_schweisens = malloc(qt_mensagens * sizeof(schweisen));
		
		//Reseta a quantidade de todos os schweisens da lista
        for (i = 0; i <= qt_mensagens - 1; i++){
            lista_schweisens[i].quantidade = 0;
			lista_schweisens[i].x = -1;
		}
		
		//Remove o \n do buffer
        getchar();
		
        gasto_total = 0;
        for (j = 1; j <= qt_mensagens; j++){
            scanf("%c", &mensagem_conan);
			
            if (mensagem_conan == 'A'){
				scanf("%i %i %i", &qt_schweisens_encontrados, &posicao_x_schweisen, &posicao_y_schweisen);
				
				//Remove o \n do buffer
				getchar();
				
                r = is_coordenada_na_lista(posicao_x_schweisen, posicao_y_schweisen);
				
				//Se a coordenada atual estiver na lista, apenas atualiza a quantidade de schweisen que está lá
                if (r != -1){
                    lista_schweisens[r].quantidade += qt_schweisens_encontrados;
                }
				//Caso contrário, é criado um schweisen na lista com a quantidade encontrada
                else{
                    lista_schweisens[qt_coordenadas_com_schweisen].quantidade += qt_schweisens_encontrados;
                    lista_schweisens[qt_coordenadas_com_schweisen].x = posicao_x_schweisen;
                    lista_schweisens[qt_coordenadas_com_schweisen].y = posicao_y_schweisen;
                    qt_coordenadas_com_schweisen++;
                }
            }
			
            if (mensagem_conan == 'P'){
				scanf("%i %i %i %i", &ponto_x_schweisen, &ponto_y_schweisen, &ponto_z_schweisen, &ponto_w_schweisen);
				
				//Remove o \n do buffer
				getchar();
				
                for (i = 0; i <= qt_coordenadas_com_schweisen - 1; i++){
                    if(lista_schweisens[i].x >= menor(ponto_x_schweisen, ponto_z_schweisen) && lista_schweisens[i].x <= maior(ponto_x_schweisen, ponto_z_schweisen)){
                        if(lista_schweisens[i].y >= menor(ponto_y_schweisen, ponto_w_schweisen) && lista_schweisens[i].y <= maior(ponto_y_schweisen, ponto_w_schweisen)){
                            gasto_total += lista_schweisens[i].quantidade * preco_deswevileutssen;
                        }
                    }
                }
                printf("%i\n", gasto_total);
            }
			
            gasto_total = 0;
        }
        scanf("%i %i %i", &tamanho_campo_X, &tamanho_campo_Y, &preco_deswevileutssen);
        printf("\n");
    }

    return 0;
}