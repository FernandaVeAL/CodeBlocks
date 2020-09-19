#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float x;
    char a,b;
    printf("Digite o estado de destino e o valor do produto:\n");
    scanf("%c%c%f",&a,&b,&x);
    switch(a)
    {
    case'M':
    {
        if ('b' == 'G')
            printf("O preco no estado de %c%c:R$%.2f\n",a,b,x*1.07);
        else
            printf("O preco no estado de %c%c:R$%.2f\n",a,b,x*1.08);

    }
    break;
    case'S':
        printf("O preco no estado de %c%c:R$%.2f\n",a,b,x*1.12);

        break;
    case'R':
        printf("O preco no estado de %c%c:R$%.2f\n",a,b,x*1.15);

        break;
    }
    system("pause");
    return 0;
}
