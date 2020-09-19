#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n[8];
    int i,x,y;
    for(i=0;i<8;i++)
    {
        printf("Digite um munero:\n");
        scanf("%f",&n[i]);
    }
    printf("Digite um numero de 1 a 8:\n");
    scanf("%d",&x);
    printf("Digite mais um numero de 1 a 8:\n");
    scanf("%d",&y);
    printf("Soma = %f\n",n[x-1]+n[y-1]);
    system("pause");
    return 0;
}
