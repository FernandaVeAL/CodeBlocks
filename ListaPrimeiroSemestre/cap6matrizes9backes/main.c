#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int soma =0 ;
    int m[3][3] ;//= {{5,-8,10},{1,2,15},{25,10,7}};
    int v[3] = {0,0,0};
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
             printf("Digite o numero para matriz[%d][%d]:\n",i,j);
             scanf("%d",&m[i][j]);
            //printf("%d\t",m[i][j]);
        }
    }
     for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf("%d\t",m[i][j]);
        }
    }
    printf("\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
    {
       v[j] +=  m[i][j];

    }
    }
    for(k=0;k<3;k++)
        printf("%d\t",v[k]);

    printf("\n");
    system("pause");
    return 0;
}
