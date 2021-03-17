#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potega1(int n, int m);

int main()
{
    int n = 0;
    int m = 0;
    double x = 0;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Podaj liczbe m: ");
    scanf("%d", &m);
    if(n <= 0 && m <= 0)
    {
        printf("Podaj liczby wieksze od 0");
    }
    else
    {
        x = potega1(n, m);
        printf("%f", x);
    }
    getch();
    return 0;
}
double potega1(int n, int m)
{
    float x = pow((double)n, (double)m);
    return x;
}

