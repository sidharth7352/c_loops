#include<stdio.h>
void main()
{
int num,c=0,r=0,a=0,rev;
printf("enter the number...\n");
scanf("%d",&num);
for(num;num;num=num/10)
{
rev=num%10;
c++;
if(rev%2==0)
a++;
if(rev>5)
r++;
}
printf("number of digits of number=%d\n",c);
printf("number of digits of even number=%d\n",a);
printf("number of digits greater than 5 =%d\n",r);
}
