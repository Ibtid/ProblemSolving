#include<stdio.h>
int main(void)
{
    int x=0, n, p;
    char i[2];
    scanf("%d",&n);
    for(p=n;p--;p>=0)
    {
        scanf("%s",&i);
        if(i[1]=='+')
            x++;
        else if(i[1]=='-')
            x--;
    }
    printf("%d",x);
    return 0;
}
