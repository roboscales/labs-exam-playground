#include <stdio.h>

#include <conio.h>

#include <math.h>

int main()

{

int a[20], min, max, n, i, k=0, d=0;

printf("write number of your elements(n<20):\n");

scanf("%d",&n);

printf("write your elements:\n");

scanf("%d\n",&a[0]);

min=a[0];

max=a[0];

for(i=1;i<n;i++)

{

scanf("%d\n", &a[i]);

if(a[i]>0&&a[i]<min)

{min=a[i]; k=i;}

else if(a[i]<0&&abs(a[i])<abs(max))

{max=a[i]; d=i;}

}

clrscr();

for(i=0;i<n;i++)

printf("%d ", a[i]);

printf("\n________________________________________________________\n\n ");

a[k]=max;

a[d]=min;

for(i=0;i<n;i++)

{

printf("%d ", a[i]);

}

getch();

return 0;

}
