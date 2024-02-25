#include<stdio.h>
void main()
{
int num,sum=0,r;
printf("enter the number...\n");
scanf("%d",&num);
for(num,sum;num;num=num/10)
{
r=num%10;
sum=sum*10+r;
}
printf("reverse :  %d \n",sum);
}

