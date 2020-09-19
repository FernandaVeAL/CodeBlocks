#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{
    int soma = 0;
    int i,j;
    int valores[N][N];//={{2,2,2,2,2,2},{0,2,2,2,2,2},{0,0,2,2,2,2},{0,0,0,2,2,2},{0,0,0,0,2,2},{0,0,0,0,0,2}};
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Digite o valor %d x %d da matriz:\n",i+1,j+1);
            scanf("%d",&valores[i][j]);
        }
        for(j=0;j<N;j++)
        {
            if(i>j)
                soma = soma +valores[i][j];
        }
    }
    printf("Soma:%d\n",soma);
    system("pause");
    return 0;
}
