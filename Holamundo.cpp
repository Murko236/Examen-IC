# include <stdio.h>
int main() {

	int ancho;
	int alto;
	int coordenada_superior_x;
	int coordenada_superior_y;
	int coordenada_inferior_x;
	int coordenada_inferior_y;
	float relacion_x;
	float relacion_y;
	float relacion_ancho;
	float relacion_alto;

	scanf_s("%i", &ancho);
	scanf_s("%i", &alto);
	scanf_s("%f", &relacion_x);
	scanf_s("%f", &relacion_y);
	scanf_s("%f", &relacion_ancho);
	scanf_s("%f", &relacion_alto); 

	coordenada_superior_x = ancho * relacion_x;
	coordenada_superior_y = alto * relacion_y;
	coordenada_inferior_x = coordenada_superior_x + ancho * relacion_ancho;
	coordenada_inferior_y = coordenada_superior_y + alto * relacion_alto;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, relacion_x, relacion_y, relacion_ancho,
		relacion_alto, coordenada_superior_x, coordenada_superior_y, coordenada_inferior_x, coordenada_inferior_y);
	

	return 0;
}