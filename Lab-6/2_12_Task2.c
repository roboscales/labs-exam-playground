#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define N 12

int main()
{

int i, j, key, s, x;

int a[N];

srand(time(NULL));
for (i=0; i<N; i++) {
a[i] = rand() % 100;
printf("%3d\n", a[i]);
}
printf("\n");

for(j = 2; j < N; j++)
{
key = a[j];

i = j - 1;

while(i >= 0 && a[i] < key)
{
a[i + 1] = a[i];
i = i - 1;
}

a[i + 1] = key;
}

printf("New array:\n");

for (i=0; i<N; i++) {
printf("%3u\n", a[i]);
}

getch();

return 0;
}
