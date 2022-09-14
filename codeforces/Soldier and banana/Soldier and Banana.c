#include<stdio.h>
#include<math.h>
int main(void)
{
    int i, k, n, w, m=0, t;
    scanf("%d",&k);
    scanf("%d",&n);
    scanf("%d",&w);
    for(i=1;i<=w;i++)
    {
        t=i*k+m;
        m=t;
    }
    t=t-n;
    if(t<=0)
        printf("0");
    else
    printf("%d",t);
    return 0;
}
