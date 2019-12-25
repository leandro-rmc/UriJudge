var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var argumentos, i, comidaNasPlantas, pesoJacana, pesoComida, totalPlantas;
var vetArgumentos = [];
var pesoSuportadoPlantas = [];

argumentos = lines.shift();
vetArgumentos = argumentos.split(" ");
pesoJacana = parseInt(vetArgumentos[0]);
pesoComida = parseInt(vetArgumentos[1]);
totalPlantas = parseInt(vetArgumentos[2]);

argumentos = lines.shift();
vetArgumentos = argumentos.split(" ");
for (i = 0; i < totalPlantas; i++) {
	pesoSuportadoPlantas[i] = vetArgumentos[i];
}
comidaNasPlantas = 0;

for (i = 0; i < totalPlantas; i++) {
	if (pesoJacana + pesoComida > pesoSuportadoPlantas[i]) {
		pesoComida = pesoComida - (pesoComida + pesoJacana - pesoSuportadoPlantas[i]);
		if (pesoComida < 0)
    		break;
		if (i === 0)
    		continue;
		comidaNasPlantas++;
		if (pesoComida === 0)
    		break;
	}
}
console.log(comidaNasPlantas);