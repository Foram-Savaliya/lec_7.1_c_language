#include<stdio.h>

void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{	
			(j%2==1)?
			printf("1 "):printf("0 ");
		}
		printf("\n");
	}
}
