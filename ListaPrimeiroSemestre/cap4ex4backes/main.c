#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Digite o valor do seu salario e da prestacao:\n");
    scanf("%f%f",&x,&y);
    (y<(x*0.2))?printf("Emprestimo nao concedido\n"):printf("Emprestimo concedido\n");
    system("pause");
    return 0;
}
