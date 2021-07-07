
#include<stdio.h>
#include<math.h>
int main()
{

    double val, temp;
    int valf, valf100=0, valf50=0, valf25=0, valf10=0, valf5=0, valf1=0;
    int vali, vali100=0, vali50=0, vali20=0, vali10=0, vali5=0, vali2=0;

    scanf("%lf",&val);

    vali = val;
    temp = (val*100);
    valf = (int)temp;
    valf = valf - (vali*100);

    vali100 = vali/100;
    vali = vali%100;

    vali50 = vali/50;
    vali = vali%50;

    vali20 = vali/20;
    vali = vali%20;

    vali10 = vali/10;
    vali = vali%10;

    vali5 = vali/5;
    vali = vali%5;

    vali2 = vali/2;
    vali = vali%2;

    valf = (vali*100) + valf;


    valf100 = valf/100;
    valf = valf%100;

    valf50 = valf/50;
    valf = valf%50;

    valf25 = valf/25;
    valf = valf%25;

    valf10 = valf/10;
    valf = valf%10;

    valf5 = valf/5;
    valf = valf%5;

    valf1 = valf/1;
    valf = valf%1;


    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", vali100);
    printf("%d nota(s) de R$ 50.00\n", vali50);
    printf("%d nota(s) de R$ 20.00\n", vali20);
    printf("%d nota(s) de R$ 10.00\n", vali10);
    printf("%d nota(s) de R$ 5.00\n", vali5);
    printf("%d nota(s) de R$ 2.00\n", vali2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", valf100);
    printf("%d moeda(s) de R$ 0.50\n", valf50);
    printf("%d moeda(s) de R$ 0.25\n", valf25);
    printf("%d moeda(s) de R$ 0.10\n", valf10);
    printf("%d moeda(s) de R$ 0.05\n", valf5);
    printf("%d moeda(s) de R$ 0.01\n", valf1);

    return 0;
}
