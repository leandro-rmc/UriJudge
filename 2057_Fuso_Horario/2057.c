#include <stdio.h>
 
int main() {
    int hora_destino, hora_saida, duracao_viagem, fuso_horario;
    scanf("%i %i %i", &hora_saida, &duracao_viagem, &fuso_horario);
	
	//Obtém o total de horas
    hora_destino = hora_saida + duracao_viagem + fuso_horario;
	
	//Se ultrapassou às 23 horas (25, por exemplo), devemos ajustar a hora_destino para que fique correto | Ex: 25:00 - 24:00 = 01:00
    if(hora_destino > 23)
       hora_destino -=  24;
    if(hora_destino < 0)
       hora_destino += 24;
	   
    printf("%i\n", hora_destino);
    return 0;
}