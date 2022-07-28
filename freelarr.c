// count the frec=quncy of element in an array f=frequncy ,k= key element to dearch

#include<stdio.h>
int main()
{
	int  a[10],i,f=0,k;
	for(i=0;i<10;i++)
	{
		printf("enter number \n ");
		scanf("%d",&a[i]);
	}
	printf("enter number to find frequncy");
	scanf("%d",&k);
	for(i=0;i<10;i++)
	{
		if(a[i]==k)
		f++;
	}
	printf("\n frequncy of %d is %d",k,f);
	return 0;
}

