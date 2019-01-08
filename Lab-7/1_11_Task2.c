#include <stdio.h>

#include <conio.h>

#define n 80

int main()

{

int m, i, j, length=0, max=0;

printf("write number of your lines\n");

scanf("%d",&m);

m+=1;

if(m>7) m=7;

char line[6][n];

printf("write your simbols:\n");

for(i=0;i<m;i++)

gets(line[i]);

for(i=0;i<m;i++)

{

length=0;

for(j=0;j<n;j++)

{

if(line[i][j]!=' ') length+=1;

else if(line[i][j]==' '&&length>max) {max=length; length=0;}

}

length=0;

for(j=0;j<n;j++)

{

if(line[i][j]!=' ') length+=1;

else if(line[i][j]==' '&&length==max)

{

line[i][j-length-1]='<';

line[i][j]='>';

length=0;

max=0;

}

if(line[i][j]==' '||line[i][j]=='\n') length=0;

}

}

for(i=0;i<m;i++)

puts(line[i]);

getch();

return 0;

}
