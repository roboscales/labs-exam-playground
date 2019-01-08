#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define M 81

int main()
{
char str[M];
int i,is=0;
printf("Vvedite stroku: ");
gets(str);
for(i=0;i<strlen(str);i++)
{
if(str[i]=='.') is=1;
if(is==1 && isalpha(str[i]) && !isalpha(str[i-1]))
{
if(str[i]>='a' && str[i]<='z')
str[i]+='A'-'a';
}
}
printf("\nIzmenennaya stroka: ");
puts(str);
getch();
return 0;
}
