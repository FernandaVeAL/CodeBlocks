#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n[10];
   int i;
   float m,soma,S,d =0;
   for(i=0;i<10;i++)
   {
       printf("Digite um numeros:\n");
       scanf("%d",&n[i]);
       soma = soma + n[i];
   }
   m = soma/10;
   for(i=0;i<10;i++)
      {
           S = S +pow((n[i]-m),2);
           //printf("%f\n",S);
      }
   d = sqrt((S/(10-1)));
   printf("%f\n",d);
   system("pause");
    return 0;
}

