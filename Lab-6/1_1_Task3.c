#include<iostream>
#include<stdlib.h>
#include <conio.h>
#define e 8
#define w 10

int main()
{
//строки
int N;
//столбцы
int M;
int mass[8][10];
int temp;
//заполняем двухмерный массив и выводим на экран
printf("vvedenie kolichestva strok\n\n");
scanf("%d", &N);
printf("vvedenie kolichestva stolbtsov\n\n");
scanf("%d", &M);
if (N >= e)
N=e;
if (M >= w)
M=w;
printf("vvod matritsi\n\n");
for(int i=0;i<N;i++)
for(int j=0;j<M;j++)
scanf("%d", &mass[i][j]);
//Сортируем массив
for(int i=0;i<=(N*M);i++)//колличество проходов
{
//в строках упорядочиваем
for(int i=0;i<N;i++)
{
for(int j=0;j<M-1;j++)
{
if(mass[i][j]>mass[i][j+1])
{
temp=mass[i][j];
mass[i][j]=mass[i][j+1];
mass[i][j+1]=temp;
}
}
}
}
printf("Posle sortirovki\n\n");;
for(int i=0;i<N;i++)
{
for(int j=0;j<M;j++)
{
printf("%d\t",mass[i][j]);
}
printf("\n\n");
}
getch();
return 0;
} 
