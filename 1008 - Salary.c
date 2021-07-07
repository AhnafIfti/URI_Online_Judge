#include<stdio.h>
int main(void)
{
    int empnumb,wrkhr;
    float salprhr,salary;
    scanf("%d%d%f",&empnumb,&wrkhr,&salprhr);
    salary=wrkhr*salprhr;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",empnumb,salary);
    return 0;
}
