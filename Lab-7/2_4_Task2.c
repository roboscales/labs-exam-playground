#include "pch.h"

#include <iostream>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#define N 9

#define M 80

int main()

{

int i, j, n, a=0, z=0, min;

char st[N][M];

printf("Vvedite kolichestvo strock ");

scanf_s("%d", &n);

if (n > 6) n = 6;

min = 80;

printf("\nVvedite slova\n");

for (i = 1; i <= n+1; i++)

{

gets_s ( st[i]);

if (strlen(st[i]) < min && strlen(st[i])!=0)

{

min = strlen(st[i]);

a = i-1;

}

}

printf("\nStroka s min.kolichestvom simvolov ");

printf("%d", a);

printf("\nVvedite nomer stroki, s kotoroy pomenyat' mestami ");

scanf_s("%d", &z);

for (j = 1; j < M; j++)

{

st[n + 3][j] = st[z + 1][j];

st[z+1][j] = st[a+1][j];

st[a + 1][j] = st[n + 3][j];

}

for (i = 2; i <= n + 1; i++)

{

puts(st[i]);

}

}
