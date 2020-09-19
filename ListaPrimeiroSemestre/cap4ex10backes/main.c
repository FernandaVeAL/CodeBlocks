#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float x,y,z,m;
    printf("Digite o numero do calculo desejado:\n");
    printf("Digite 3 numeros:\n");
    scanf("%d%f%f%f",&n,&x,&y,&z);
    switch(n)
    {
    case 1:
        {
            m = x*y*z;
            printf("Media geometrica:%f\n",m);
        }
        break;
        case 2:
        {
            m = (x+2*y+3*z)/6;
            printf("Media ponderada:%f\n",m);
        }
         break;
        case 3:
        {
            m = 1/((1/x)+(1/y)+(1/z));
            printf("Media harmonica:%f\n",m);
        }
         break;
        case 4:
        {
            m = (x+y+z)/3;
            printf("Media aritmetica:%f\n",m);
        }
         break;
    }
     system("pause");
    return 0;
}
