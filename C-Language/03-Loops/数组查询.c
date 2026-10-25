#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int target;
    int found=0;
    scanf("%d",&target);
    for(int i=0;i<5;i++)
    {      if(a[i]==target)
        {
        found=1;
          printf("找到数据，下标为%d",i);
        break;
        }
    } 

 if(found==0)
 {
    printf("没找到");
 }
        
    return 0;
}
