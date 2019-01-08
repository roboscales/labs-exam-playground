#include <stdio.h>

#include <conio.h>

int main()

{

int a[12][16], n, m, i, j, min, k=0, s;

printf("write size of the line(no more than 12):\n");

scanf("%d", &n);

printf("write size of the column(no more than 16):\n");

scanf("%d", &m);

printf("write your elements\n");

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

scanf("%d",&a[i][j]);

}

clrscr();

min=a[0][0];

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

if(a[i][j]<=min) min=a[i][j];

}

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

printf("%d ",a[i][j]);

printf("\n\n");

}

printf("______________________________\n\n\n");

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

{

if(a[i][j]==min&&a[i+1][j]==min)

{

k+=2;

for(s=0;s<2;s++)

{

for(j=0;j<m;j++) a[i+1][j]=a[i+2][j];

}

}

if(a[i][j]==min&&a[i+1][j]!=min)

{

k+=1;

for(s=i;s<n;s++)

{

for(j=0;j<m;j++) a[i][j]=a[i+1][j];

}

}

}

}

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

{

if((n-i)==k&&j==0)

{

for(i=0;i<k;i++)

{

for(j=0;j<m;j++)

{

a[i][j]=0;

printf("%d ",a[i][j]);

}

printf("\n\n");

}

getch();

return 0;

}
