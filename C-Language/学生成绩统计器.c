#include<stdio.h>
int main()
{
    int a[5];
    int i;
    int sum=0;
    double medium;
    int max,min;
    int b=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];min=a[0];
for(i=0;i<5;i++)
{
    sum+=a[i];
     
    if(a[i]>max)
    {
        max=a[i];
    }
    if(a[i]<min)
    {
        min=a[i];
    }
    if(a[i]>=60)
    {
        b++;
    }
}
medium=sum/5.0;
printf("及格人数：%d\n",b);
printf("总分：%d\n",sum);
printf("平均分：%.2f\n",medium);
printf("最高分：%d\n",max);
printf("最低分：%d\n",min);
return 0;
}