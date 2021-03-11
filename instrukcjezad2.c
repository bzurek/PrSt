 #include <stdio.h>
#include <stdlib.h>
#define KROTKA '#'

int main()
{
    int ch;
    int licznik = -1;
    while((ch = getchar()) != KROTKA)
    {
        licznik++;
        if(licznik % 8 == 0)
        {
            printf("\n");
        }
        if(ch == 10 || ch == 13)
        {
            licznik = -1;
            printf("\n");
            continue;
        }
        printf("Znak %c: ASCII %d ", ch, ch);
    }
    getch();
    return 0;
}
