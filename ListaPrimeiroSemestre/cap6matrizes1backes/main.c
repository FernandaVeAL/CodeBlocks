#include <stdio.h>
#include <stdlib.h>
#define N 3
int main()
{
    int i,j,menor;
    int valores[N][N];// = {1,2,3,4,5,6,7,8,9};

    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("Digite o valor %d %d da matriz 3 x 3:\n ",i+1,j+1);
            scanf("%d",&valores[i][j]);
        }


    }
     menor = valores[0][0];
    for (i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if (menor >= valores[i][j])

            {
                menor = valores[i][j];
            }
        }
    }
    printf("o menor valor e %d\n",menor);
    system("pause");
    return 0;
}
