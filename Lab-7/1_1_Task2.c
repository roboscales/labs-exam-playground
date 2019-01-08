#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define M 81
#define N 6

int main()
{
char strs[N][M];
int i,j,n,k=0;
printf("Vvedite kolichestvo strok: ");
scanf("%d",&n);
gets(strs[0]);
if(n>N) n=N;
if(n<1) n=1;
for(i=0;i<n;i++)
{
gets(strs[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
for(j=0;j<strlen(strs[i]);j++)
{
if(isalnum(strs[i][j]) && !isalnum(strs[i][j+1]))
{
k++;
}
}
printf("Slov v stroke %d: %d\n",i+1,k);
k=0;
}
getch();
return 0;
}
