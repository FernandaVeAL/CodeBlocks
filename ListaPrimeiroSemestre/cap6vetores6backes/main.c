#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[10];
    int i;
    for (i=0; i<10; i++)
    {
        printf("Digite o valor %d:\n",i+1);
        scanf("%d",&valores[i]);
    }
    for (i=0; i<=10; i++)
    {
        if (i%2 == 0 )
            printf("%d\t",i);

    }
    printf("\n");
    system("pause");
    return 0;
}
