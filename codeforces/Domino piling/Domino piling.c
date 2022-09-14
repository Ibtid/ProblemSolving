#include<stdio.h>
int main(void)
{
    int length, breadth, area, domino;
    scanf("%d",&length);
    scanf("%d",&breadth);
    area=length*breadth;
    domino=area/2;
    printf("%d",domino);
    return 0;
}
