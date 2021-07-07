#include<stdio.h>
int main(void)
{
    float A,B,C,triangle,circle,trapezium,square,rectangle;
    scanf("%f%f%f",&A,&B,&C);
    triangle=0.5*A*C;
    circle=3.14159*C*C;
    trapezium=C*((A+B)/2);
    square=B*B;
    rectangle=A*B;
    printf("TRIANGULO: %0.3f\nCIRCULO: %0.3f\nTRAPEZIO: %0.3f\nQUADRADO: %0.3f\nRETANGULO: %0.3f\n",triangle,circle,trapezium,square,rectangle);
    return 0;
}
