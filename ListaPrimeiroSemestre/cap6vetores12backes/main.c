#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Digite o valor %d:\n",i+1);
        scanf("%d",&valores[i]);
    }
    printf("\nValores iguais:");
    for(i=0;i<10;i++)
    {
        if (valores[i] == valores [i+1])
            printf("%d, ",valores[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
