#include<stdio.h>
void main()
{
int i,num,sum,c;
printf("perfect numbers between 1 and 51...\n");
for(num=1,c=0,sum=0;num<=52;num++)
{
for(i=1,sum=0;i<num;i++)
{
if(num%i==0)
sum=sum+i;
}
if(num==sum)
{
printf("%d\n",num);
c++;
}
}
printf("no.of perfect numbers=%d\n",c);
}
