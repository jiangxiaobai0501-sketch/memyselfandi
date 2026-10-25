#include<stdio.h>
int triple(int n)

{
   
   int triple=n*3;
   return triple;

   
}

int main()
{
    int n;
    int result;
    scanf("%d",&n);
    result=triple(n);
    printf("%d",result);
    return 0;
}