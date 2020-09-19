#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Digite um numero com 3 digitos:\n");
    scanf("%d",&a);
    b = a/100;
    c = (a%100)/10;
    d = (a%100)%10;
    printf("%d%d%d\n",d,c,b);
    system("pause");
    return 0;
}
