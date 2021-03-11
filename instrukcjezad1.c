#include <stdio.h>
#include <stdlib.h>
#define KROTKA '#'

int main()
{
    int znaki = 0;
    int odstepy =0;
    int nowlin = 0;
    int ch;
    while((ch = getchar()) != KROTKA)
    {
    if(ch == 10)
    {
        nowlin++;
        znaki--;
    }
    else if(ch == 32)
    {

        odstepy++;
    }
    else
    {
        znaki++;
    }
    }
    printf("Ilosc znakow: %d\nIlosc odstepow: %d\nIlosc nowych linii: %d", znaki, odstepy, nowlin);
    getch();
    return 0;
}
