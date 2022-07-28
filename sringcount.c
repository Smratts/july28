#include<stdio.h>
int main()
{
char a[100];
int i, word=1;
printf(" \n Enter name or string");
gets(a);
i=0;
while(a[i]!='\0')
{
if(a[i]==' ') //if (a[i]==' '&&a[i+1]!=' ')
word++;
i++;
}
printf("\n number of words =%d", word);
}

