#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &b);
    printf("Podaj trzecia liczbe calkowita: ");
    scanf("%d", &c);
    int tmp= a;
    if(tmp<b)
    {
        tmp=b;
    }
    if(tmp<c)
    {
        tmp=c;
    }
    printf("%d", tmp);
    getch();
    return 0;
}
