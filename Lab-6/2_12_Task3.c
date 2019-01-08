#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define N 8
#define M 10

int main()
{

int a[8][10] = { 0 }, i, j, max, min, max_i, max_j, min_i, min_j, n, m;

clrscr();

printf("Strok:\n");
scanf("%d", &n);

printf("Stolbtsov:\n");
scanf("%d", &m);

printf("Vvodie elements\n");

scanf("%d", &a[0][0]);
max = a[0][0];
min = a[0][0];
max_j = 0;
max_i = 0;
min_j = 0;
min_i = 0;

for (i = 0; i < n; i++) {
for (j = 0; j < m; j++) {
if (i == 0 && j == 0){

continue;
}
scanf("%d", &a[i][j]);
if (a[i][j] >= max){
max = a[i][j];
max_j = j;
max_i = i;
}
if (a[i][j] <= min) {
min = a[i][j];
min_j = j;
min_i = i;
}
}
}
for (i = 0; i < n; i++) {
for (j = 0; j < m; j++) {
printf("%5d ", a[i][j]);
}
printf("\n");
}
printf("\nНовая матрица\n");
a[max_i][max_j] = min;
a[min_i][min_j] = max;


for (i = 0; i < n; i++) {
for (j = 0; j < m; j++) {
printf("%5d ", a[i][j]);
}
printf("\n");
}
printf("\n");

getch();
return 0;
}
