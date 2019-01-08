#include <stdio.h>

#include <conio.h>

#include <string.h>

int main()

{

int n, i;

char line[80], rem;

printf("write your elements:\n");

gets(line);

n=strlen(line);

for(i=0;i<n;i++)

printf("%c", line[i]);

printf("\n_________________\n\n");

printf("write simbol that should be removed:\n");

scanf("%c",&rem);

for(i=0;i<n;i++)

if(line[i]==rem)

while(i<n)

{

line[i]=line[i+1];

i++;

}

puts(line);

getch();

return 0;

}

