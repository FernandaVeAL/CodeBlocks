#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define N 10
#define M 3
int main()
{
    int i;
    int j = 0;
    int prova1 =0;
    int prova2 =0;
    int prova3 =0;
    int notas[N][M]  = {1,2,3,4,5,6,7,8,9,10,10,9,8,7,6,5,4,3,2,1,6,5,4,3,2,1,7,8,9,10};
    int menor;
    int vezes[N];
    for(i=0; i<N; i++)
    {
        vezes[i]=0;
        printf("\n");
        for(j=0; j<M; j++)
        {
            /* printf("Digite a nota do aluno %d na prova %d:\n",i+1,j+1);
              scanf("%d",&notas[i][j]);*/
            printf("%d\t",notas[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<N; i++)
    {
        menor = INFINITY;
        for (j=0; j<M; j++)
        {

            if (menor>=notas[i][j])
            {
                menor = notas[i][j];
                vezes[i]++;
                //printf("%d\n",menor);
            }

        }
        if (vezes[i]== 1)
        {
            prova1++;
        }
        if(vezes[i]==2)
        {
            prova2++;
        }
        if(vezes[i]==3)
        {
            prova3++;
        }
        //printf("%d\t",vezes[i]);

    }
    printf("\n");
    printf("%d alunos tiveram sua pior nota na Primeira prova\n",prova1);
    printf("%d alunos tiveram sua pior nota na Segunda prova\n",prova2);
    printf("%d alunos tiveram sua pior nota na Terceira prova\n",prova3);

    system("pause");

    return 0;
}
