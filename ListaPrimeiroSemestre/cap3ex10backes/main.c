#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    x = 780000.00;
    printf("Primeiro ganhador:R$%.2f\nSegundo ganhador:R$%.2f\nTerceiro ganhador:R$%.2f\n",x*0.46,x*0.32,x*(1-0.46-0.32));
    system("pause");
    return 0;
}
