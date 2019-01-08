#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define N 80

#define M 6

int main()

{

int a[M][N+1],m,z,x=0,i,mmax,mmin;

do

{printf("Vvedite kol-vo strok ot 1 to 5\n"); scanf("%d",&m);}

while(m<1||m>5);

printf("Vvedite stroki\n");

for(i=0;i<=m;i++) gets(a[i]);

z=strlen(a[1]);

x=strlen(a[1]);

for(i=0;i<=m;i++) puts(a[i]);

printf("\n");

mmax=1;

mmin=1;

for(i=1;i<=m;i++)

{

if(z<strlen(a[i])) {z=strlen(a[i]);mmax=i;}

if(x>strlen(a[i])) {x=strlen(a[i]);mmin=i;}

}

for(i=0;i<=m;i++)

{if(i==mmax) {puts(a[mmin]);continue;}

if(i==mmin) {puts(a[mmax]);continue;}

puts(a[i]); }

return 0;}
