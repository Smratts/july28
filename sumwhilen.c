#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("\n enter n value");
	scanf("%d",&n);
	i=1;
	sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;

	printf("\n Sum=%d",sum);

}
return 0;

}

