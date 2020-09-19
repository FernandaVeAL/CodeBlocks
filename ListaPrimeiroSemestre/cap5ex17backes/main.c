#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
    int k = 0 ;
    printf("Digite um numero:\n");
    scanf("%d",&N);
    for(i=0; i<=N; i++)
    {
        printf("\n");
        for(j=1; j<=i; j++)
        {
            k++;
            printf(" %d ",k);

        }
    }
    printf("\n");
    system("pause");
    return 0;
}
