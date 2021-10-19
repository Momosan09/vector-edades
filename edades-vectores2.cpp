#include <stdio.h>

int i, prom, porc, min, max, edad[5], acum, maxID, maxporc,contM;

main(){
	
	for(i=0;i<5;i++){
	printf("  \n Ingrese edad %d\n  ",i);
	scanf("%d", &edad[i]);
	acum= acum + edad[i];

	prom= acum / 5;
	}


	
	for(i=0;i<5;i++){
	
	if(edad[i] >= 18 || i==0){
		max=edad[i];
		maxID= i;

	if(edad[i]>= 18){
		contM+=1;
	}

	}
	if(edad[i]<prom){
	printf("\n  En la posicion %d la edad es menor al promedio\n", i);
		}	
	}


	porc= (contM * 100) / 5;
	
	
	printf("\n  -Promedio de edades= %d", prom);
	printf("\n  -La maxima edad es la posicion %d y es de %d", maxID, max);
	printf("\n  -El porcentaje de mayores de edad es= %d",porc);

}
