import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		String argumentos;
		String[] vetArgumentos;
		int i,comidaNasPlantas,pesoJacana,pesoComida,totalPlantas;
	    List<Integer> pesoSuportadoPlantas = new ArrayList<>();
	    Scanner scanner = new Scanner(System.in);
	    
	    argumentos = scanner.nextLine();
	    vetArgumentos = argumentos.split(" ");
    	pesoJacana = Integer.parseInt(vetArgumentos[0]);
    	pesoComida = Integer.parseInt(vetArgumentos[1]);
    	totalPlantas = Integer.parseInt(vetArgumentos[2]);
	    		
	    argumentos = scanner.nextLine();
	    vetArgumentos = argumentos.split(" ");
	    for (i = 0; i < totalPlantas; i++) {
	    	pesoSuportadoPlantas.add(Integer.parseInt(vetArgumentos[i]));
	    }

	    comidaNasPlantas = 0;
	    for (i = 0; i < totalPlantas; i++) {
	    	if (pesoJacana + pesoComida > pesoSuportadoPlantas.get(i)) {
	    		pesoComida = pesoComida - (pesoComida + pesoJacana - pesoSuportadoPlantas.get(i));
	    		if (pesoComida < 0)
	    			break;
	    		if (i == 0)
	    			continue;
	    		comidaNasPlantas++;
	    		if (pesoComida == 0)
	    			break;
	    	}
	    }
	    
	    System.out.println(comidaNasPlantas);
	    scanner.close();
	}
	
}