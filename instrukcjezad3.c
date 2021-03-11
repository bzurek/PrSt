#include <stdio.h>
#include <stdlib.h>
#define ZERO '0'

int main()
{
    int ch;
    int parzyste = 0;
    int nieparzyste = 0;
    int sumpar = 0;
    int sumnie = 0;
    float sr_parz = 0;
    float sr_nieparz = 0;
    while(1)
    {
        scanf("%d", &ch);
        if(ch == 0)
        {
            break;
        }
        if(ch % 2 == 0 && ch != 0)
        {
            parzyste++;
            sumpar+= ch;
        }
        else
        {
            nieparzyste++;
            sumnie+= ch;
        }
    }
    sr_parz = (float)sumpar / (float)parzyste;
    sr_nieparz = (float)sumnie / (float) nieparzyste;
    printf("Ilosc wpisanych liczb parzystych %d: \n Srednia wartosc %f \n Ilosc liczb nieparzystych: %d \n Srednia wartosc: %f", parzyste, sr_parz, nieparzyste, sr_nieparz);
    getch();
    return 0;
}
