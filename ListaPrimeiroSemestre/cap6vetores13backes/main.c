#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[10];
    int i =0;
    int j ;
    while(i<10)
    {
        printf("Digite o valor %d:\n",i+1);
        scanf("%d",&valores[i]);

        for(j=0; j<i; j++)
        {

            if(valores[i] == valores[j])
            {
                printf("Digite um valor %d diferente:\n",i+1);
                scanf("%d",&valores[i]);
                if(valores[i] == valores[j])
                {
                    printf("Digite um valor %d DIFERENTE:\n",i+1);
                    scanf("%d",&valores[i]);
                }
            }
        }
        i++;

    }

    printf("\n");
    for(i=0; i<10; i++)
        printf("%d\t",valores[i]);
    printf("\n");
    system("pause");
    return 0;
}
