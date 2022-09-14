#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i, count=1, l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
            if(count==7)
                break;
        }
        else
            count=1;
    }
    if (count>=7)
        printf("YES");
    else
        printf("NO");
    return 0;
}
