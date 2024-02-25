#include<stdio.h>
void main()
{
int num,sum=0,rev;
printf("enter the number...\n");
scanf("%d",&num);
for(sum;num;num=num/10)
{
rev=num%10;
sum=sum+rev;
}
printf("sum = %d\n",sum);
}
