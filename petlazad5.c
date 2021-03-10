#include <stdio.h>
#include <stdlib.h>
//65 A - 90 Z
int main()
  {
    int a, b;
    printf("Podaj od ktorej liczby chcesz zaczac: ");
    scanf("%d", &a);
    printf("Podaj do ktorej liczby chcesz skonczyc program: ");
    scanf("%d", &b);
    for(int i= a; i<=b; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(j==1)
            {
                printf("%d\t", i);
            }
            else if(j==2)
            {
                printf("%d\t", i*i);
            }
            else
            {
                printf("%d\t", i*i*i);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

