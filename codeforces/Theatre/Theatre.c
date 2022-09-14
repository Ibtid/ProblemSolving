#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long int n, m, a, t, x, y;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(n%a==0)
        x=(n/a);
    else
        x=(n/a)+1;
    if(m%a==0)
        y=(m/a);
    else
        y=(m/a)+1;
    t=(x*y);
    printf("%lld",t);
    return 0;
}

