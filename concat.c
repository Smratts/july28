#include<stdio.h>
int main()
{
	char a[50],b[50],c[100];
	int i,j;
	printf("\n enter first string: ");
	scanf("%[^\n]s",a);
	printf("\n enter second string; ");
	scanf(" %[^\n]s",b); //we should give space before " %[^\n]s", as it conciders enter or any kwy in the key board as charecter, so to take the second string we gave space, 
	i=j=0;
	while(a[i]!='\0')
	{
	c[i]=a[i];
	i++;
	}
	while(b[j]!='\0')
	{	
	c[i]=b[j];
	i++;
	j++;
	}
	c[i]='\0';
	printf(" \n concatenated string =%s",c);
	return 0;
}
