#include<stdio.h>
int main()
{
    char s[3][300];
    for(int i=0;i<3;i++)
    {
        printf("enter %d string =",i+1);
        fgets(s[i],30,stdin);
    }
    for(int i=0;i<3;i++)
    {
        printf("\n%s",s[i]);
    }
    return 0;
}
