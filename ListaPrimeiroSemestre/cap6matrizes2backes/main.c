#include <stdio.h>
#include <stdlib.h>
#define N 4
int main()
{
    int i,j,maior;
    int valores[N][N];//  = {112,259,3,4,5,6255,7,8,9458,10,11,12,13,14,15,16};

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Digite o valor da %d x %d da matriz : \n",i+1,j+1);
            scanf("%d",&valores[i][j]);
        }

    }
    maior = valores[0][0];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if (maior <= valores[i][j])

            {
                maior = valores [i][j];
            }
        }
    }
    printf("O maior valor e %d\n",maior);
    system("pause");
    return 0;
}
