#include<stdio.h>
int main(void)
{
    char ch[30];
    double A,B,salary;
    scanf("%s",&ch);
    scanf("%lf%lf",&A,&B);
    salary=A+(B*0.15);
    printf("TOTAL = R$ %0.2f\n",salary);
    return 0;
}
