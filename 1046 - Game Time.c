#include<stdio.h>
int main(void)
{
    int a, b, sum;

    scanf("%d%d",&a,&b);

    if(b>a)
    {
        sum=b-a;
    }
    else
    {
        a=24-a;
        sum=a+b;
    }
    printf("O JOGO DUROU %d HORA(S)\n",sum);

    return 0;
}
