#include <stdio.h>
#include <stdlib.h>
#define KROTKA '#'

int main()
{
    int ch;
    int zmiany = 0;
    while(1)
    {
        ch = getchar();
        if(ch == KROTKA)
        {
            break;
        }
        if(ch == 46 || ch == 33)
        {
            zmiany++;
        }
    }
    printf("Ilosc zamian: %d", zmiany);
    getch();
    return 0;
}
