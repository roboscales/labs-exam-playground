#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define N 80

int main()

{

char strochka[N];

int i,j;

printf("Vvedite strocki\n ");

gets(strochka);

for(i=0;i<strlen(strochka);i++)

{

if (strochka[i]>48&&strochka[i]<58);

{

for(j=i;j<strlen(strochka);j++)

strochka[j]=strochka[j+1];

}

}

puts(strochka);

return 0;

}

