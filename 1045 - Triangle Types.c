#include<stdio.h>
int main (void)
{
    int i, j, k, n=3;
    double arr[3], temp=0.0;
    double A,B,C;

    for(k=0; k<n; k++)
    {
        scanf("%lf",&arr[k]);
    }

    for(j=n-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(arr[i]<arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    A = arr[0];
    B = arr[1];
    C = arr[2];

    if(A >= B + C)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if(A*A == B*B + C*C)
            printf("TRIANGULO RETANGULO\n");
        if(A*A > B*B + C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        if(A*A < B*B + C*C)
            printf("TRIANGULO ACUTANGULO\n");
        if(A==B && A==C)
            printf("TRIANGULO EQUILATERO\n");
        if((A==B && A!=C)|| (A==C && A!=B)|| (B==C && B!=A))
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
