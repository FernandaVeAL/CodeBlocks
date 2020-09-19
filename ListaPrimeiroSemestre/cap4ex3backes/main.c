#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero:\n");
    scanf("%d",&x);
    ((x%2) == 0)? printf("O numero e par\n") : printf("O numero e impar\n");
    system("pause");
    return 0;
}
