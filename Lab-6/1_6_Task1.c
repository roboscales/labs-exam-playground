
#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#define N 20

int main()

{

int mmax,mmin,n,i,a[N],q=0,w=0;

do

{

printf("Vvedite colivchestvo chisel at 1 to 20\n");

scanf("%d",&n);}

while(n>20||n<1);

printf("Vvedite %d chisel\n",n);

for(i=0;i<n;i++) scanf("%d",&a[i]);

mmin=mmax=a[0];

for(i=0;i<n;i++)

{

if(a[i]>mmax) {mmax=a[i];w=i;}

if(a[i]<mmin) {mmin=a[i];q=i;}

}

a[w]=mmin;

a[q]=mmax;

for(i=0;i<n;i++) printf("%d",a[i]);

return 0;

}
