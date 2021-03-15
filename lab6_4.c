#include <stdio.h>
#include <string.h>

int main()
{
    int a,i,j;
    scanf("%d",&a);
    char str[a][2] ;

    for (i = 0; i <= a; i++)
    {
        scanf("%d",&str[i][j]);

        for (j = 0; j <= 2; j++)
        {
            scanf("%d",&str[i][j]);
        }

    }



    return 0;
}
