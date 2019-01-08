#include <stdio.h>

#include <stdlib.h>

int main()

{

int a[12][12],i,j,m,n;

int maxNegativeElementCount = 0;

int rowNumberWithMaxCount = 0;

int currentRowNegativeElementCount = 0;

int valueToChange = 0;

printf("Vvedite colichestvo strok:\n");

scanf("%d",&n);

printf("Vvedite colichestvo stolbchov:\n");

scanf("%d",&m);

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

{

printf("write a[%d][%d]:",i+1,j+1);

scanf("%d",&a[i][j]);

}

}

printf("massiv is:\n");

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

{

if (j==m-1) {printf ("%d\n", a[i][j]);}

else {printf ("%d\t", a[i][j]);}

}

}

for(i=0;i<n;i++)

{

for(j=0;j<m;j++)

{

if(a[i][j] < 0) currentRowNegativeElementCount++;

if(maxNegativeElementCount<currentRowNegativeElementCount)

{

maxNegativeElementCount = currentRowNegativeElementCount;

rowNumberWithMaxCount = i;

}

}

}

if(rowNumberWithMaxCount % 2 == 0) valueToChange = 0;

else valueToChange = 1;

for (i=0;i<n;i++) a[i][rowNumberWithMaxCount] = valueToChange;

printf("change massiv is:\n");

for (i=0;i<n;i++)

{

for(j=0;j<m;j++)

{

if (j==m-1) {printf ("%d\n", a[i][j]);}

else {printf ("%d\t", a[i][j]);}

}

}

system("pause");
return 0;
}
