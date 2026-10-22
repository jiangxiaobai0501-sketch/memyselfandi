#include<stdio.h> 
int main()
{
	int a;
	scanf("%d",&a);
	if((a%4==0 && a%100!=0) || a%400==0)
	{
	
	printf("这个数是闰年");
}
     else
	 {
	   printf("这个数不是闰年"); 
}
return 0;
}
