#include<stdio.h>
void main()
{
int num,i,n1,sum;
printf("enter the number...\n");
scanf("%d",&num);
printf("factors of %d is ",num);
for(i=1;i<=num;i++)
{
	n1=num%i;
	if(n1==0)
	printf("%d ",i);
}
for(i=1,sum=0;i<num;i++)
{
	if(num%i==0)
	sum=sum+i;
}
printf("\n");
if(sum==num)
printf("%d is a perfect number..\n",num);
else
printf("%d is not a perfect number..\n",num);
}
