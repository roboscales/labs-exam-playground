#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define N 80


int main()
{
	char str[N];
	char *s1,*s2;
	char c;
	clrscr();
	printf("Enter a string:\n");
	gets(str);
	s2 = s1 = str;
	while(*s2)
	{
		if((*s2) % 2 == 0)
		{
			c = *s2;
			*s2 = *s1;
			*s1 = c;
		}
		if((*s1) % 2 == 0)
		{
			s1++;
		}
		s2++;
	}
        printf("\nChanged string: ");
	puts(str);
	getch();
	return 0;
}
