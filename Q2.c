#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][50];
    for(int i=0;i<10;i++)
    {
        printf("Enter %d city name =",i+1);
        fgets(s[i],50,stdin);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(strcmp(s[i],s[j])==-1)
            {
                char temp[50];
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("\n%s",s[i]);
    return 0;
}
