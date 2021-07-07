#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,c,d,t,x1,x2;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    d = (b*b)-(4*a*c);

    if(a==0 || d<0){
        printf("Impossivel calcular");
    }
    else{
        t = sqrt(d);
        x1 = (-b+t)/(2*a);
        x2 = (-b-t)/(2*a);

        printf("R1 = %0.5lf\n",x1);
        printf("R2 = %0.5lf",x2);
    }
    printf("\n");

    return 0;
}
