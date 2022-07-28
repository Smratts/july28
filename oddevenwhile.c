#include<stdio.h>
int main()
{
int i,n;
printf("\n enter n value");
scanf("%d",&n);
i=1; // initialization
while(i<=n) //condition
{
if(i%2==0) // logic for even no:
printf("\n %d",i);
i=i+1; // incriment
}
return 0;
}

