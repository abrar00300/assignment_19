#include<stdio.h>
#include<string.h>
int main()
{
    char s[4][40];
    printf("Enter 4 string\n");
    for(int i=0;i<4;i++)
    {
        printf("Enter %d string =",i+1);
        fgets(s[i],40,stdin);
    }
    int c=0;
    for(int v=0;v<4;v++)
    {
        c=0;
        for(int i=0,j=strlen(s[v])-2;i<j;i++,j--)
        {
            if(s[v][i]!=s[v][j])
                c++;
        }
        if(c==0)
                printf("%s\n",s[v]);
    }
    return 0;
}
