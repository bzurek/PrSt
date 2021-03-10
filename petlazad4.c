#include <stdio.h>
#include <stdlib.h>
//65 A - 90 Z
int main()
  {
   int i, j;
   char alph = 'A';
   int n,przesuniecie;
   int srodek = 1;
   char tmp[3];

   printf("Podaj duza litere: ");
   scanf("%s", &tmp);
   n = tmp[0];
   for (i = 1; i <= (n - 64); i++)
	{
	for(przesuniecie=1;przesuniecie<=n-i;przesuniecie++)

	printf("  ");
      for (j = 0; j <= (srodek / 2); j++)
      {
         printf("%c ", alph++);
      }
      alph = alph - 2;
      for (j = 0; j < (srodek / 2); j++)
      {
         printf("%c ", alph--);
      }
      srodek = srodek + 2;
      alph = 'A';
      printf("\n");
   }
    getch();
    return 0;
}

