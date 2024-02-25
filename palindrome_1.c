#include<stdio.h>
void main()
{
int num,temp,rev,r;
printf("enter the number..\n");
scanf("%d",&num);
temp=num;
for(rev=0;temp;temp=temp/10)
{
r=temp%10;
rev=rev*10+r;
}
if(num==rev)
printf("palindrome number...\n");
else
printf("not a palindrome number...\n");
}
