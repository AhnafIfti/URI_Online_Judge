#include<stdio.h>
int main(void)
{
    int a,b,c,flag;
    scanf("%d%d%d",&a,&b,&c);
    flag=0;
    if(a>b) flag=a;
    else flag=b;
    if(c>flag) flag=c;
    printf("%d eh o maior\n",flag);
    return 0;
}
