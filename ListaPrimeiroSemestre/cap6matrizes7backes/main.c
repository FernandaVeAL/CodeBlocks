#include <stdio.h>
#include <stdlib.h>
#define N 3
int main()
{
    int i,j;
    int soma = 0;
    int valores[N][N];// ={1,2,3,4,5,6,7,8,9};
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Digite o valor %d %d da matriz:\n",i+1,j+1);
            scanf("%d",&valores[i][j]);
        }
        for(j=0;j<N;j++)
        {
            if((i + j)== (N-1))
                soma = soma + valores[i][j];
        }
    }
    printf("A soma dos valores da diagonal secundaria e %d\n",soma);
    system("pause");
    return 0;
}
