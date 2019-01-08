#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 81

int main()
{
	char str[N];
	char c;
	int i,j;
	clrscr();
	printf("Enter a string:\n");
	gets(str);
	printf("Enter a symbol, that you want to add:\n");
	scanf("%c",&c);
	for(i = 1; i <= strlen(str); i++)
	{
		if(!isalpha(str[i]) && isalpha(str[i-1])) // checking the space
		{
			if(strlen(str)<N-1)
				for(j=strlen(str);j>=i;j--)
					str[j+1] = str[j];
			str[i]=c; // adding a symbol
			i++;
		}

	}
	printf("A new string:\n");
	puts(str);
	getch();
	return 0;
}
