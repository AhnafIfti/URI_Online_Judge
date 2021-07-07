#include<stdio.h>
int main(void)
{
    int prdct1code,prdct2code,unitofprdct1,unitofprdct2;
    float prceofprdct1,prceofprdct2;
    float value1,value2,value;
    scanf("%d%d%f",&prdct1code,&unitofprdct1,&prceofprdct1);
    scanf("%d%d%f",&prdct2code,&unitofprdct2,&prceofprdct2);
    value1=unitofprdct1*prceofprdct1;
    value2=unitofprdct2*prceofprdct2;
    value=value1+value2;
    printf("VALOR A PAGAR: R$ %0.2f\n",value);
    return 0;
}
