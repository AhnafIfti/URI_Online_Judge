#include<stdio.h>
int main(void)
{
    int v,t;
    float s,l;
    scanf("%d%d",&t,&v);
    s=v*t;
    l=s/12;
    printf("%0.3f\n",l);
    return 0;
}
