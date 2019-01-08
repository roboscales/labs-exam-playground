#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define N 81
#define M 6


int main()
{
	char strs[M][N];
	int i,j,k=0,n,beg=0,m;
	clrscr();
	printf("Enter the number of strings: ");
	scanf("%d",&m);
	gets(strs[0]);
	if(m>6) m=6;
	else if(m<1) m=1;
	for(i = 0; i<m; i++)
	{
		printf("%d string: ", i+1);
		gets(strs[i]);
	}
	printf("Enter the number of glasnix: ");
	scanf("%d",&n);
	printf("\nWords : ");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < strlen(strs[i]); j++)
		{
			if(!isalpha(strs[i][j]) && isalpha(strs[i][j+1])) beg = j;
			if(     strs[i][j] == 'a' || strs[i][j] == 'e' || strs[i][j] == 'o' || strs[i][j] == 'i' || strs[i][j] == 'y' || strs[i][j] == 'u' ||
				strs[i][j] == 'A' || strs[i][j] == 'E' || strs[i][j] == 'O' || strs[i][j] == 'I' || strs[i][j] == 'Y' || strs[i][j] == 'U') k++;
			if(isalpha(strs[i][j]) && !isalpha(strs[i][j+1]))
			{
				if(k == n)
				{
					for(k=beg;k<=j;k++) printf("%c",strs[i][k]);
					printf(" ");
				}
				k = 0;
			}
		}
	}
	getch();
	return 0;
}
