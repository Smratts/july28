#include<stdio.h>
int main()
{
int i,n;
printf("enter n value\n");
scanf("\n%d",&n);
i=1;
while(i<=n)
{
if(i%2!=0)
printf("\n %d",i);
i=i+1;
}
return 0;
}


