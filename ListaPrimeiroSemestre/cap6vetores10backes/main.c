#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100];
    int i = 0;
    int j= 0;
    while (j < 100)
    {
        if (i%7 != 0)
        {
            n[j]= i;
            j++;
            printf("%d\n",i);
        }
        i++;


    }
    system("pause");
    return 0;
}


