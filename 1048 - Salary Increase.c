#include<stdio.h>
int main(void)
{
    float sal,per,nSal;
    int giv;

    scanf("%f",&sal);

    if(sal>=0 && sal<=400.00)
    {
        per=sal*0.15;
        nSal=sal+per;
        giv = 15;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 15 ",nSal,per);
    }
    if(sal>=400.01 && sal<=800.00)
    {
        per=sal*0.12;
        nSal=sal+per;
        giv = 12;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 12 %",nSal,per);
    }
    if(sal>=800.01 && sal<=1200.00)
    {
        per=sal*0.1;
        nSal=sal+per;
        giv = 10;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 10 %",nSal,per);
    }
    if(sal>=1200.01 && sal<=2000.00)
    {
        per=sal*0.07;
        nSal=sal+per;
        giv = 7;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 7 %",nSal,per);
    }
    if(sal>=2000.01)
    {
        per=sal*0.04;
        nSal=sal+per;
        giv = 4;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 4 %",nSal,per);
    }
    printf("%c",'%');
    printf("\n");

    return 0;
}
