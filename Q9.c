#include<stdio.h>
#include<string.h>
int fact(int);
int main()
{
    char s[5][50],n[50];
    printf("Enter 5 names to fill the name list ---\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter %d name =",i+1);
        fgets(s[i],50,stdin);
    }
    printf("\n\n Enter User name =");
    fgets(n,50,stdin);
    int cnt=0;
    for(int i=0;i<5;i++)
    {
        if(strcmp(n,s[i])==0)
        {
            cnt++;
        }
    }
    if(cnt!=0)
    {
        int num;
        printf("\n Enter your number =");
        scanf("%d",&num);
        printf("Factorial of the %d is = %d ",num,fact(num));
    }
    else
    {
        printf("ERROR user name not found !!");
    }
    return 0;
}
int fact(int num)
{
    int f;
    if(num==1)
            return 1;
    f=num*fact(num-1);
    return f;
}
