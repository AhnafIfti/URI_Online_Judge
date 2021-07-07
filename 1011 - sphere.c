#include<stdio.h>
int main(void)
{
    int R;
    double result;
    scanf("%d",&R);
    result=(4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %0.3f\n",result);
    return 0;
}
