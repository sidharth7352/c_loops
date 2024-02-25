#include<stdio.h>
void main()
{
int n1,n2,num,sum,i;
printf("enter the starting number..\n");
scanf("%d",&n1);
printf("enter the ending number...\n");
scanf("%d",&n2);
printf("perfect number between %d and %d are :\n",n1,n2);
for(num=n1;num<=n2;num++)
{
	for(i=1,sum=0;i<num;i++)
	{
		if(num%i==0)
		 sum=sum+i;
        }
                if(sum==num)
		{
                printf("%d\n",num);
		}
}
}
