#include "pch.h"

#include <iostream>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#define M 80

int main()

{

int g1 = 0, g2 = 0, j, k = 1, b = 0, a = 0;

char st[M];

char z;

printf("\nVvedite slova \n");

gets_s(st);

printf("\nVvedite simvol, kotoryy hotite udalit': ");

z = getchar();

printf("\nVvedite nomer slova: ");

scanf_s("%d", &a);

b = g2;

for (j = 1; j < M; j++)

{

if (st[j] == ' ' && st[j - 1] != ' ')

{

k++;

if (a == 1)

{

g1 = 1;

g2 = j;

if (g2 != b) break;

}

else

{

if (k == a)

{

g1 = j;

}

if (k == a + 1)

{

g2 = j;

if (g2 != b) break;

}

else g2 = M;

}

}

}

printf("\n\n%d %d\n\n", g1, g2);

for (j = g1; j < g2; j++)

{

if (st[j] == z)

{

b = j;

for (j = b; j < g2; j++)

{

st[j] = st[j + 1];

}

j = g1;

}

}

printf("%s ", st);

}
