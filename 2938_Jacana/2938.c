#include <stdio.h>

struct planta{
	int peso_suportado;
	
	//Atributo não usado, mas que pode servir para alguma coisa em caso de adições de novas funções
	int quantidade_comida;
};

int main()
{
    int peso_jacana, peso_comida, temp_peso_comida, total_plantas, comida_nas_plantas, i;
    scanf("%i %i %i", &peso_jacana, &peso_comida, &total_plantas);
    
    //Cria um vetor para guardar informações sobre todas as plantas
    struct planta plantas[total_plantas];
	
    comida_nas_plantas = 0;
    for (i = 0; i < total_plantas; i++){
        
        //Preenche o vetor com informações sobre todas as plantas
        scanf("%i", &plantas[i].peso_suportado);
        plantas[i].quantidade_comida = 0;
        
        //Se a planta da iteração atual não suportar o peso do pássaro mais o peso da comida...
        if (peso_jacana + peso_comida > plantas[i].peso_suportado) {
            
            //Verifica se o pássaro vai conseguir largar alguma comida com sucesso
            temp_peso_comida = peso_comida - (peso_comida + peso_jacana - plantas[i].peso_suportado);
            if (temp_peso_comida >= 0){
                
                //Guarda a quantidade de comida que a planta atual tem
                plantas[i].quantidade_comida = peso_comida + peso_jacana - plantas[i].peso_suportado;
                
                //Deixa para trás parte da comida, subtraindo da variável peso_comida
                peso_comida = temp_peso_comida;
            }
            else{
                //Se o valor for negativo é porque o pássaro possívelmente morreu afogado :(
                break;
            }
                
            //Se for a primeira planta da lista, não há planta anterior para largar a comida
            //Então o atributo tem_comida deve permanecer 0
            if (i == 0)
                continue;
            comida_nas_plantas++;
            
            //Se o pássaro não tem mais comida, não há porque continuar
            if (peso_comida == 0)
                break;
        }
    }
    printf("%i\n", comida_nas_plantas);
    return 0;
}