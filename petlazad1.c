#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[26];
    char tmp[5];
    for (int i = 0; i < 26; i++)
    {
        printf("Podaj %d mala litere: ", i + 1);
        scanf("%s", &tmp);
        a[i] = tmp[0];
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c", a[i]);
    }
    getch();
    return 0;
}
