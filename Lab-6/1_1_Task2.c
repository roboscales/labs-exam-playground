#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 200

int main(void)
{
int i;
int a[N], k;
for (i = 0; i < N; i++)
{
k = rand() % N + 1;
a[i] = k;
}
int j;
for (i = 0; i < N - 1; i++)
for (j = i + 1; j < N; j++)
if (a[i] > a[j])
{
k = a[j];
a[j] = a[i];
a[i] = k;
}
for (i = 0; i < N; i++)
printf("%d\n", a[i]);
getch();
return 0;
}
