#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define M 20

int main()
{
float mas[M];
float *p,*pmx,*pmn,max,min;
int i,m;
printf("Vvedite kolichestvo elementov: ");
scanf("%d",&m);
if(m>M) m=M;
if(m<1) m=1;
printf("Vvedite massiv: ");
p = mas;
while(p-mas<m)
{
scanf("%f",p);
p++;
}
p=mas;
max = min = *mas;
pmx = pmn = mas;
while(p-mas<m)
{
if(*p>max)
{
max = *p;
pmx = p;
}
if(*p<min)
{
min = *p;
pmn = p;
}
p++;
}
printf("\nKolichestvo elementov mezdu max i min: %d",abs(pmx-pmn)-1);
getch();
return 0;
}
