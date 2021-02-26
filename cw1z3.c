#include <stdio.h>
#include <stdlib.h>
int main()
{
	int wyjscie;
	printf("Kalkulator: wybierz co chcesz policzyc \n");
	printf("1- dodawanie \n" );
    printf("2- odejmowanie \n");
    printf("3- mnozenie \n");
    printf("4- dzielenie \n");
	scanf("%d", &wyjscie);
	int a, b, wynik;
	switch (wyjscie)
	{
	case 1:
		printf("podaj liczby do dodawania \n");
		scanf("%d", &a);
		scanf("%d", &b);
		wynik = a + b;
		printf("wynik dodawania: %d", wynik);
		printf("\n");
		break;
	case 2:
		printf("podaj liczby do odejmowania \n");
		scanf("%d", &a);
		scanf("%d", &b);
		wynik = a - b;
		printf("wynik odejmowania: %d", wynik);
		printf("\n");
		break;
	case 3:
		printf("podaj liczby do mnozenia \n");
		scanf("%d", &a);
		scanf("%d", &b);
		wynik = a * b;
		printf("wynik mnozenia: %d", wynik);
		printf("\n");
		break;
	case 4:
		printf("podaj liczby do dzielenia \n");
		scanf("%d", &a);
		scanf("%d", &b);
		wynik = a / b;
		printf("wynik dzielenia: %d", wynik);
		printf("\n");
		break;
	}
    getch();
    return 0;
}
