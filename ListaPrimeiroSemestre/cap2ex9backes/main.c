#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primeiro,segundo;
    printf("Escreva dois numeros separados por virgula:\n");
    scanf("%f,%f",&primeiro,&segundo);
    printf("%.2f, %.2f \n",segundo,primeiro);
    system("pause");
    return 0;
}
