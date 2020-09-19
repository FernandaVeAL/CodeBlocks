#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int i;
    float f;
    printf("Escreva um caractere, um numero inteiro e um numero deciamal:\n");
    scanf("%c %d %f",&c,&i,&f);
    printf("%c %d %f\n",c,i,f);
    printf("%c\t%d\t%f\t\n",c,i,f);
    printf("%c\n%d\n%f\n\n",c,i,f);
    system("pause");
    return 0;
}
