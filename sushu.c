 #include<stdio.h> 
 int main()
 {
 	int n,i;
 	int flag=1;
 	scanf("%d",&n);
 	if(n<=1)
 	{
 		flag=0;
 		
	 }
	 for(i=2;i<n;i++)
	 {
	 	if(n%i==0)
	 	{
	 		flag=0;
	 		break;
			 }
		 }
		 if(flag==1)
		 {
		 	printf("sushu");
		 }
		 else
		 {
		 	printf("no sushu");
		 }
	 return 0;
 }
