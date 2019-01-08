#include <stdio.h>

#include <conio.h>

#define n 80

int main()

{

int i, j, m;

char line[5][n],*min,*max,*p;

printf("write number of your lines:\n");

scanf("%d", &m);

m+=1;

if(m>5) m=5;

printf("write your simbols:\n");

for(i=0;i<m;i++)

gets(line[i]);

for(i=0;i<m;i++)

puts(line[i]);

for(i=0;i<m;i++)

{

min=max=&line[i][0];

for(j=1;j<n;j++)

{

p=&line[i][j];

if(*p>*max) max=p;

else if(*p<*min) min=p;

}

for(j=0;j<n;j++)

if(*p==*min||*p==*max)

*p='_';

}

for(i=0;i<m;i++)

puts(line[i]);

getch();

return 0;

}
