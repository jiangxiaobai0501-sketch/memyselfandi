#include<stdio.h>
int main()
{
int a[5]={5,6,16,2,4};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    for(int b=0;b<5;b++)
    {
    printf("%d ",a[b]);
    }
    return 0;
}