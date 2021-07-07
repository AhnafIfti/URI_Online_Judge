#include<stdio.h>
int main(void)
{
    int X,Y,i;
    float sum;
    scanf("%d%d",&X,&Y);
        if(X==1) sum=4.00*Y;
        if(X==2) sum=4.50*Y;
        if(X==3) sum=5.00*Y;
        if(X==4) sum=2.00*Y;
        if(X==5) sum=1.50*Y;
    printf("Total: R$ %0.2f\n",sum);
    return 0;
}
