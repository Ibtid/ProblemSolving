#include<stdio.h>
int main(void)
{
    int no, test, me, lift, dif;
    scanf("%d",&test);
    for(no=1;no<=test;no++)
    {
        scanf("%d%d",&me,&lift);
        if(me>=lift)
        {
            dif=me-lift;
            dif=((dif+me)*4)+19;
        }
        if(me<lift)
        {
            dif=(lift*4)+19;
        }
        printf("%d: %d\n",no,dif);
    }
    return 0;
}
