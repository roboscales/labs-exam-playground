#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define M 20

int main()
{
	int mas[M];
	int m,i,j,k,kol=0,m1, a=0,is=0;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&m);
	if(m>M) m = M;
	if(m<1) m = 1;
	printf("Enter the elements themselfs:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&mas[i]); //entering the elements
	}
	m1=m;
	for(i=0;i<m;i++)
	{
		a = mas[i];
		for(j=i+1; j<m && a!=0;j++)
		{
			if(mas[j] == a)
			{
				if(is==0)
				{
					j=i;
					is=1;
				}
				for(k=j;k<m-1;k++) // deleting of matching elements
				{
					mas[k]=mas[k+1]; 
				}
				j--;
				kol++;
				m--; // reduce the array size
			}
		}
		if(is) i--;
		is=0;
	}
	for(i=m1;i>=m1-kol;i--) // adding m count of zero
		mas[i]=0;
	for(i=0;i<m1;i++)
	{
		printf("%d ",mas[i]);
	}
	getch();
	return 0;
}
