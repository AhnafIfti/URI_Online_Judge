#include<stdio.h>
int main(void)
{
    float a,b,c;
    float sum1,sum2;
    scanf("%f%f%f",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
    {
        sum1=a+b+c;
        printf("Perimetro = %0.1f\n",sum1);
    }
    else
    {
        sum2=(c*(a+b))/2;
        printf("Area = %0.1f\n",sum2);
    }
    return 0;
}
