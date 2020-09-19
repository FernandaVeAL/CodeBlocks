#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int s = 0;
    printf("Digite um numero:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if (n%i == 0)
            s = s+i;
    }
    printf("Soma dos multiplos de %d: %d\n",n,s);
    system("pause");
    return 0;
}
