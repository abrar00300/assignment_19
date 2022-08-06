#include<stdio.h>
#include<string.h>
int main()
{
    char s[4][40],w[40]={'\0'},r[30]={"255"};
    int cnt=0,x=0,cnt1=0;
    printf("*Format for valid IP address -\n \t X.X.X.X \n*Maximum length for valid IP address '15' \n");
    printf("----Enter 4 IP address ----\n");
    for(int i=0;i<4;i++)
    {
        printf("Enter %d IP address =",i+1);
        fgets(s[i],40,stdin);
    }
    for(int i=0;i<4;i++)
    {
        if(strlen(s[i])>16)
            cnt1++;
        cnt=0;
        for(int j=0;s[i][j];j++)
        if(s[i][j]=='.')
            cnt++;
        if(cnt!=3)
        {
            cnt1++;
            printf("\n %d is not valid IP address ",i+1);
        }
    }
    if(cnt1!=0)
        printf("\n\n\n ____All IP addresses are not valid____");
    else
        printf("\n\n\n ____All IP addresss are valid____");
    return 0;
}
