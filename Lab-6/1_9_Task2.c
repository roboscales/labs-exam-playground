#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

int main()

{

int a[2500], n, i, k;

printf("write number of your elements(no more than 2500):\n");

scanf("%d",&n);

for(i=0;i<n;i++)

{

a[i]=random(n-1);

printf("%d; ",a[i]);

}

printf("\n_____________________________________________________\n");

for(i=0;i<n;i++)

if(a[i-1]>a[i])

while(i>=0)

{

k=a[i];

if(a[i-1]>a[i])

{

a[i]=a[i-1];

a[i-1]=k;

}

i--;

}

for(i=0;i<n;i++)

{

printf("%d; ", a[i]);

}

getch();

return 0;

}
