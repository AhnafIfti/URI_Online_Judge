#include<stdio.h>
int main(void)
{
    float N1,N2,N3,N4,avr1,N5,avr2;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    avr1=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %0.1f\n",avr1);
    if(avr1>7.0) printf("Aluno aprovado.\n");
    if(avr1<5.0) printf("Aluno reprovado.\n");
    if(avr1>=5.0&&avr1<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %0.1f\n",N5);
        avr2=(avr1+N5)/2;
        if(avr2>5.0) printf("Aluno aprovado.\n");
        if(avr2<=4.9) printf("Aluno reprovado.\n");
        printf("Media final: %0.1f\n",avr2);
    }
}
