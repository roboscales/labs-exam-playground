#include "pch.h"

#include <cstdio>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#define N 80

int main()

{

int n, i, z, j, k = 0, v = 0;

char st[N];

scanf_s("%d\n", &n);

if (n > 81)

{

n = 81;

}

gets_s(st);

for (i = 0; i < n; i++)

{

for (j = 1; j < n; j++)

{

if ((st[j - 1] == '1' || st[j - 1] == '2' || st[j - 1] == '3' || st[j - 1] == '4' || st[j - 1] == '5' || st[j - 1] == '6' || st[j - 1] == '7' || st[j - 1] == '8' || st[j - 1] == '9' || st[j - 1] == '0') && (st[j] != '1' || st[j] != '2' || st[j] != '3' || st[j] != '4' || st[j] != '5' || st[j] != '6' || st[j] != '7' || st[j] != '8' || st[j] != '9' || st[j] != '0'))

{

z = st[j - 1];

st[j - 1] = st[j];

st[j] = z;

}

}

}

printf("%s", st);

}
