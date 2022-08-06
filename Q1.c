#include<stdio.h>
int main()
{
    char s[5][50];
    for(int i=0;i<5;i++)
    {
        printf("enter %d string =",i+1);
        fgets(s[i],50,stdin);
    }
    int cnt;
    for(int i=0;i<5;i++)
    {
        cnt=0;
        for(int j=0;s[i][j];j++)
        {
            if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u'||s[i][j]=='A'||s[i][j]=='E'||s[i][j]=='I'||s[i][j]=='O'||s[i][j]=='U')
                cnt++;
        }
        printf("Total number of wovels in %d string is %d\n",i+1,cnt);
    }
    return 0;
}
