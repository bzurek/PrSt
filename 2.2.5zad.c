#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potega(int n);

int main()
{
    int n = 0;
    double x = 0;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    x = potega(n);
    printf("%f", x);
    getch();
    return 0;
}
double potega(int n)
{
    float x = pow((double)2, (double)n);
    return x;
}
