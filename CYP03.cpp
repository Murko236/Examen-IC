#include<stdio.h>

int main() {

	int dia, mes, a_o, bisiesto;

	scanf_s("%i", &dia);
	scanf_s("%i", &mes);
	scanf_s("%i", &a_o);

	if ((a_o == 1582) && (mes == 10) && (dia ==4)) {//especial
		dia = 15;
		printf("%2i %2i %4i", dia, mes, a_o);
	}
	else {

		if (a_o % 4 == 0) {
			if (a_o % 100 == 0) {
				if (a_o % 400 == 0) {
					bisiesto = 1;
				}
				else {
					bisiesto = 0;
				}
			}
			else {
				bisiesto = 1;
			}
		}
		else {
			bisiesto = 0;
		}


		switch (mes) {
		case (1):
		case (3):
		case (5):
		case (7):
		case (8):
		case (10):
			if (dia < 31) {
				dia = dia + 1;
				printf("%2i %2i %4i", dia, mes, a_o);
			}
			else {
				mes = mes + 1;
				dia = 1;
				printf("%2i %2i %4i", dia, mes, a_o);
			}
			break;

		case (4):
		case (6):
		case (9):
		case (11):
			if (dia < 30) {
				dia = dia + 1;
				printf("%2i %2i %4i", dia, mes, a_o);
			}
			else {
				mes = mes + 1;
				dia = 1;
				printf("%2i %2i %4i", dia, mes, a_o);
			}
			break;

		case (2)://febrero
			if (bisiesto == 1) {
				if (dia <= 28) {
					dia = dia + 1;
					printf("%2i %2i %4i", dia, mes, a_o);
				}
				else {
					mes = mes + 1;
					dia = 1;
					printf("%2i %2i %4i", dia, mes, a_o);
				}
			}
			else {
				if (dia < 28) {
					dia = dia + 1;
					printf("%2i %2i %4i", dia, mes, a_o);
				}
				else {
					mes = mes + 1;
					dia = 1;
					printf("%2i %2i %4i", dia, mes, a_o);
				}
			}
		break;

		case (12)://diciembre
			if (dia < 31) {
				dia = dia + 1;
				printf("%2i %2i %4i", dia, mes, a_o);
			}
			else {
				dia = 1;
				mes = 1;
				a_o = a_o + 1;
				printf("%2i %2i %4i", dia, mes, a_o);
			}
			break;

		default:
			break;
		}

	}

	return 0;
}