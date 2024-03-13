#include<stdio.h>

void main()
{
	int a[9][9],b[9][9],n=3,row,col;
	printf("matrix a");
		for(row=1;row<=n;row++)
		{
			for(col=1;col<=n;col++)
	{
		scanf("%d",&a[row][col]);  
		}

		}
			

	for(row=1;row<=n;row++)
		{
			for(col=1;col<=n;col++)
			{
			{
				b[row][col]=a[col][row];
			}
	}
		}
		printf("the matrix a*b\n");
		for(row=1;row<=n;row++)
		{
			for(col=1;col<=n;col++)
			{
				printf("%d\t",b[row][col]);
			}
			printf("\n");
		}
	}
		

