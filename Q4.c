#include<stdio.h>
#include<string.h>
int main()
{
    char s[4][40],n[40];
    int c=0;
    for(int i=0;i<4;i++)
    {
        printf("Enter %d string =",i+1);
        fgets(s[i],40,stdin);
    }
    printf("\n\n Enter string which we have to find =");
    fgets(n,40,stdin);
    for(int i=0;i<4;i++)
    {
        if(strcmp(s[i],n)==0)
        {
            printf("\n string is found in the list",n);
            c++;
            break;
        }
    }
    if(c==0)
        printf("string is not found in the list");
    return 0;
}
