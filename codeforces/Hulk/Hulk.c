#include<stdio.h>
int main(void)
{
    int n, i;
    scanf("%d",&n);
    for(i=1;i<=(n-1);i++)
    {
        if(!(i%2)){printf("I love that ");}
        else printf("I hate that ");
    }
    if(!(i%2)){printf("I love it");}
        else printf("I hate it");
    return 0;
}
