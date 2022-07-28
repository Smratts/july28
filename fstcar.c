#include<stdio.h>
void main()
{
	char str[100],c;
	printf(" enter string: ");
	scanf("%[^\n]",str); // same as get(str);
//	flushall(); //used to clear the buffer
	printf("enter a chareter to find: ");
	scanf("%c",&c);
}
