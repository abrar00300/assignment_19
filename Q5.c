#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][50];
    printf("Enter 5 email address-\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter %d email address=",i+1);
        fgets(s[i],50,stdin);
    }
    int c=0;
    printf("Odd emails are -\n");
    for(int i=0;i<5;i++)
    {
        if(strstr(s[i],"@")==0)
        {
            printf("%s\n",s[i]);
            c++;
        }
    }
    if(c==0)
        printf("\n All email address have @");
    return 0;
}
