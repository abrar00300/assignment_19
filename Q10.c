#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char n[5][40],p[5][40];
    printf("\t\t\t------WELCOME TO AUTHENTICATION SYSYTEM------\t\t\t\n\npress any key\n");
    getch();
    int c,b[5],x=0;
    while(1)
    {
            printf("\nENTER YOUR CHOICE :-\n");
            printf("1. Create Account \n2.Login Account \n3.EXIT\n");
             scanf("%d",&c);
    switch(c)
    {
            case 1:
                {
                    fflush(stdin);
                    printf("Enter your name= ");
                    fgets(n[x],40,stdin);
                    printf("Create your Password =");
                    fflush(stdin);
                    fgets(p[x],40,stdin);
                    printf("Enter your Balance=");
                    scanf("%d",&b[x]);
                    x++;
                    break;
                }
            case 2:
                {
                     fflush(stdin);
                    printf("Enter Your username to login =");
                    char tn[40],tp[40];
                    fgets(tn,40,stdin);
                    printf("Enter Your Password to login =");
                     fflush(stdin);
                    fgets(tp,40,stdin);
                    int cnt=0,i;
                   for(i=0;i<x;i++)
                   {
                        if(strcmp(tn,n[i])==0 && strcmp(tp,p[i])==0)
                        {
                            printf("\nCORRECT !!!\n\tUser details are -\nUsername = %s\nPassword = %s\nBalance = %d \n",n[i],p[i],b[i]);
                            i--;
                            break;
                        }
                   }
                   if(i==x)
                        printf("\n---ERROR INVALID USERNAME AND PASSWORD----\n");
                    getch();
                    break;
                }
            case 3:
                {
                    exit(1);
                }
            }
    }
    return 0;
}
