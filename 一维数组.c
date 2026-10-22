#include<stdio.h>
int main()
{
	int sum=0;
	
	int a[5]={10,20,30,40,50};
	for(int i=0;i<5;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);

    return 0;
}
