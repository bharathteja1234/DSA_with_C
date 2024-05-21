#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,r,c,k;
	printf("enter the nuumber of rows");
	scanf("%d",&r);
	printf("enter the number of columns");
	scanf("%d",&c);
	printf("enter the elements of first matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of the second matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the product of matrices is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
            mul[i][j]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
