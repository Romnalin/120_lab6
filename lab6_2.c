#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c1=0,c2=0;
    scanf("%d" ,&n);
    char sn[n],gn[n];
    scanf(" %[^\n]s",sn);
    scanf(" %[^\n]s",gn);
    for(i=0;i<n;i++)
    {
        if(sn[i]==gn[i])
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    printf("%d %d" ,c1,c2);
    return 0;
}
