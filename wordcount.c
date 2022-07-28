#include<stdio.h>
int main()
{
char a[100];
int i, word=1;
printf(" Enter name or string");
scanf("%98[^\n]s", a); //as %s reads only the first word and if space occurs then it will return and count only first word leaving rest after space, so we use “%98[^\n]s” to count after words space and 98 as string size is 100 so its 0-99, and last is null 
i=0;
while(a[i]!='\0')
{
if(a[i]==' ') //if (a[i]==' '&&a[i+1]!=' ')
word++;
i++;
}
printf("\n number of words =%d", word);
}
