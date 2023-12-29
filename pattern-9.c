#include<stdio.h>

void main()
{
	int i,j,k=1,c=2;
	char a='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				if(j%2==0)
				{
					printf("%c ",a++);
				}
				else{
					printf("%d ",c++);
				}
			}
			else if(j%2==0)
			{
				printf("%d ",c++);
			}
			else
			{
				printf("%c ",a++);
			}
		}
		printf("\n");
	}
}
