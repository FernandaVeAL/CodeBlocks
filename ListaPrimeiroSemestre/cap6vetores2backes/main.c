#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[6];
    int i;
    for(i=0;i<6;i++)
    {
        printf("Digite o valor %d:\n",i+1);
        scanf("%d",&valores[i]);
    }
    for (i=5;i>=0;i--)
    {
        printf("%d\t",valores[i]);
    }
    printf("\n");
   system("pause");
    return 0;
}
