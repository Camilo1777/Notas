#include <stdio.h>
#include <string.h>

int main(){

	printf("Bienvenido estudiante a su maravilloso sistema de notas del colegio Casita Azul \n"
	"A continuacion digite su primer nombre para saber cuales fueron sus notas definitivas y su promedio total ¡¡EXITOS!! \n");
	char estudiante[15];
	printf("Escribe tu ptimer nombre(Pepito, Pepita, Anastacio): ");
	scanf("%s", estudiante);
	
	while (1){
		
		if (strcmp(estudiante, "Pepito") == 0) {
			printf ("Estudiante Pepito sus notas totales de este año escolar fueron.....: \n"
			"Matematicas: 4.5 \n"
			"Español: 4.0 \n"
			"Ingles: 3.5 \n"
			"Sociales: 5.0 \n"
			"Ed fisica: 3.5 \n");
			float promedio = (4.5+4.0+3.5+5.0+3.5)/5;
			printf ("Su promedio en este año escolar fue de....: %f\n", promedio);
			break; 
		}
		else if (strcmp(estudiante, "Pepita") == 0 ) {
			printf ("Estudiante Pepita us notas totales de este año escolar fueron.....: \n"
			"Matematicas: 2.5 \n"
			"Español: 4.5 \n"
			"Ingles: 3.0 \n"
			"Sociales: 1.5 \n"
			"Ed fisica: 4.0 \n");
			float promedio = (2.5+4.5+3.0+1.5+4.0)/5;
			printf ("Su promedio en este año escolar fue de....: %f\n", promedio);
			break;
		}
		else if (strcmp(estudiante, "Anastacio") == 0 ) {
			printf ("Estudiante Anastacio sus notas totales de este año escolar fueron.....: \n"
			"Matematicas: 2.0 \n"
			"Español: 3.5 \n"
			"Ingles: 1.0 \n"
			"Sociales: 1.5 \n"
			"Ed fisica: 5.0 \n");
			float promedio = (2.0+3.5+1.0+1.5+5.0)/5;
			printf ("Su promedio en este año escolar fue de....: %f\n", promedio);
			break;
		}
		else {
			printf("Recuerda que los nombres que tenemos registrados en nuestra base de datos son (Pepito, Pepita, Anastacio)\n");
			printf("Escribe tu ptimer nombre(Pepito, Pepita, Anastacio): ");
			scanf("%s", estudiante);
		}
	}
return 0;	
}
