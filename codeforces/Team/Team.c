#include<stdio.h>
int main(void)
{
    int n, p, y, k, o, l=0,i;
    scanf("%d",&n);
    for(i=n;i--;0<=i)
    {
        scanf("%d%d%d",&p,&y,&k);
        o=p+k+y;
        if(o>1 && o<=3)
        {
            l++;
        }
    }
    printf("%d",l);
    return 0;
}
