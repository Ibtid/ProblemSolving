#include<stdio.h>
#include<string.h>
int main (void)
{
    char s[100];
    int i, j, k, t, count=0;
    gets(s);
    i=strlen(s);
    for(k=1; k<i; ++k)
    {
        for(j=i-1; j>=k; --j)
        {
            if(s[j-1]>s[j])
            {
                t=s[j-1];
                s[j-1]=s[j];
                s[j]=t;
            }
        }
    }
    for(j=0; j<i; j++)
    {
        if(s[j]!=s[j+1])
            count++;
    }
    if(count%2==1)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}
