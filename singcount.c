#include<stdio.h>
int main()
{
char a[100];
int i, word=1;
printf(" Enter name or string");
scanf("%98[^\n]s", a);
i=0;
while(a[i]!='\0')
{
if(a[i]==' ') //if (a[i]==' '&&a[i+1]!=' ')
word++;
i++;
}
printf("\n number of words =%d", word);
}
