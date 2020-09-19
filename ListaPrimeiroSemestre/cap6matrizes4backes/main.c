#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat [4][4];
    int i,j;
    int g =0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Digite um  numero para matriz[%d][%d]:\n",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if (mat[i][j] > 10)
            {
                printf("% d ",mat[i][j]);
                g++;
            }
        }
    }


    printf("\nExistem %d valores maoires que 10\n",g);
    system("pause");
    return 0;
}
