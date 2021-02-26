#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int wynik= 0;
	printf("Podaj liczbe n: \n");
    scanf("%d", &n);
    for(int i= 0; i<=n; i++)
    {
        wynik+= (i * i);
    }
    printf("Suma kwadratow liczby n: %d", wynik);
    getch();
    return 0;
}
