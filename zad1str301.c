#include <stdio.h>
#include <stdlib.h>

double min(double x, double y);

int main()
{
    double a = min(4.3222, 4352.4531);
    printf("%f", a);
    getch();
    return 0;
}

double min(double x, double y)
{
    if(x> y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
