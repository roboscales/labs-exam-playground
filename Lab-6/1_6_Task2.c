#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#define N 1200

void sort(int k,int a[])

{

int B,c,i;

for (i=1;i<k;i++)

{

B=a[i];

c=i-1;

while(c>=0&&a[c]<B) a[c+1]=a[c];

c=c-1;

}

a[c+1]=B;

}

int main()

{

int a[1200],n,i;

printf("vvedite colichestvo elementov at 0 to 1200:\n");

scanf("%d",&n);

for(i=0;i<n;i++){a[i]=random(n-1);printf("%d;",a[i]);}

sort(n,a);

for(i=0;i<n;i++){printf("%d;",a[i]);}

getch();

return 0;
}
