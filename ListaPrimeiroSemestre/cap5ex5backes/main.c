#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int soma =0;
    for (x=0; x<=100; x++)
    {
        if (x%2 == 0)
        {
            soma = soma + x ;
            //printf("%d\n",x);
        }
    }
    printf("Soma dos primeiros 50 numeros:%i\n",soma);
    system("pause");
    return 0;
}
