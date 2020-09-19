#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
int main()
{
    int i =0;
    int j =0;
    int valores[N][N] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
    int powaux1[N][N];
    int powaux2[N][N];
    int pow2[N][N];
    for(i=0;i<N;i++)
    {
       /* for(j=0;j<N;j++)
        {
            printf("Digite o valor %d x %d da matriz:\n",i+1,j+1);
            scanf("%d",&valores[i][j]);
        }*/

        {
            powaux1[i][j]= valores[i][j] * valores[i][j];
           // printf("%d\t",powaux1[i][j]);
        }

printf("\n");

    }
     for(j=0;j<N;j++)
        {
            powaux2[i][j]= valores[i][j] * valores[i][j];
           // printf("%d\t",powaux2[i][j]);
        }
        for(i=0;i<N;i++)
        {
             for(j=0;j<N;j++)
        {
            pow2[i][j] = powaux1[i][j] + powaux2[i][j];
            printf("%d\t",powaux1[i][j]);
            printf("%d\t",powaux2[i][j]);
            printf("%d\t",pow2[i][j]);
        }
        }

   printf("\n");
   system("pause");
    return 0;
}
