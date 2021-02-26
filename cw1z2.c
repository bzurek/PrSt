#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,x;
	printf("ax^2 + bx+ c\n");
	printf("podaj a,b,c\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int det = (b * b) - (4 * a * c);
	if (det < 0)
	{
		printf("nie ma wyniku");
	}
	if (det > 0)
	{
		x = (sqrt(det) - b) / (2 * a);
		printf("Delta dla pierwszego miejsca jest rowna: %d", x);
		printf("\n");
		x = (-sqrt(det) - b) / (2 * a);
		printf("Delta dla drugiego miejsca jest rowna: %d", x);
	}
	if (det == 0)
	{
		x =  -b/ (2 * a);
		printf("Delta jest rowna: %d", x);
	}
    getch();
    return 0;
}

