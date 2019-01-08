#include <conio.h>
#include <stdio.h>
#define k 10
int main()
{
int a[10], i, r;
int min;
printf("vvedenie dlinni massiva\n\n");
scanf("%d", &r);
if (r >= k)
r=k;
printf("Vvedite chisla \n");
for (i = 0; i<r; i++)
{
printf("%d. ", i);
scanf("%d", &a[i]);
}
for (i = 1; i<r; i++)
{
if (a[i] % 5 ==0)
{
min = a[i]; break;
}}

for (i = i+1; i<r; i++)
{
if (a[i] < min && a[i] % 5 ==0)
{
min = a[i];
}
}
printf("min element del na 5 is %d", min);
getch();
return(0);
}
