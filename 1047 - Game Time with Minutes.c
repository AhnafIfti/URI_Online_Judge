
#include<stdio.h>
int main(void)
{
    int a, b, sum, m1, m2, total;

    scanf("%d%d%d%d",&a,&m1,&b,&m2);

    if(b>a)
    {
        if(m1==m2)
        {
            sum = b-a;
            total = 0;
        }
        else if(m1<m2)
        {
            sum = b-a;
            total = m2-m1;
        }
        else if(m1>m2)
        {
            sum=b-a-1;
            m2=m1-m2;
            total=60-m2;
        }
    }
    else
    {
        if(m1==m2)
        {
            a=24-a;
            sum=a+b;
            total = 0;
        }
        else if(m1<m2)
        {
            a=24-a;
            sum=a+b;
            total = m2-m1;
        }
        else if(m1>m2)
        {
            a=24-a;
            sum=a+b-1;
            m2 = m1-m2;
            total = 60-m2;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",sum,total);

    return 0;
}

