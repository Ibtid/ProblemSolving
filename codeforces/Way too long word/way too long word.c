#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,n;
    char x[6000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
        printf("enter the word:\n");
        scanf("%s",&x);
        int l=strlen(x);

        if(l>10)
        {
            printf("Abbreviated form:");
            printf("%c",x[0]);
            printf("%d",l-2);
            printf("%c\n",x[l-1]);
        }
        else printf("No abbreviated form: %s\n",x);
 }
       return 0; }
