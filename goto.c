 #include<stdio.h>
int main()
{
int n,i=1;
printf("enter a number\n");
scanf("%d",&n);
printnum:
printf("\n %d",i);
i++;
if(i<=n)
goto printnum;
return 0;
}
