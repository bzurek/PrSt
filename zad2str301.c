#include <stdio.h>
#include <stdlib.h>

char* rzad_zn(char ch, int i, int j);

int main()
{
    char* tab = rzad_zn('a', 4, 9);
    for (int i = 0; i < 20; i++)
    {
        printf("%c", tab[i]);
    }
    getch();
    return 0;
}

char* rzad_zn(char ch, int i, int j)
{
    static char tab[20];
    for (int a = 0; a < 20; a++)
    {
        if (a < i || a > j)
        {
            tab[a] = ' ';
        }
        else
        {
            tab[a] = ch;
        }
    }
    return tab;
}
