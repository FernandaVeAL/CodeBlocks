#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,n;
    float Hn = 0;
    printf("Digite um numero:\n");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
         Hn = Hn+(1/i);
         //printf("%f\n",Hn);
         //printf("%f\n",i);
    }
    printf("%f\n",Hn);
    system("pause");
    return 0;
}
