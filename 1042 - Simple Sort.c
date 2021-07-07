#include<stdio.h>
int main(void)
{
    int arr[3];
    int i,j,k,temp;
    int a,b,c;
    for(k=0;k<3;k++)
    {
        scanf("%d",&arr[k]);
    }
    a=arr[0];
    b=arr[1];
    c=arr[2];
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++)
        printf("%d\n",arr[i]);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
