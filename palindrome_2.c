#include<stdio.h>
void main()
{
int num,temp,rev,r;
printf("palindrome numbers between 100 and 200..\n");
for(num=100;num<=200;num++)
{
	for(rev=0,temp=num;temp;temp=temp/10)
	{
		r=temp%10;
		rev=rev*10+r;
	}
	if(rev==num)
	printf("%d\n",rev);

}
}
