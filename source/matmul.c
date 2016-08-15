#include<stdio.h>
#include<stdlib.h>
				

void main()
{
	int i,j,m1,n1,m2,n2;
	printf("	==MATRIX MULTIPLICATION==\n");
	printf("enter the number of rows and coloumns in matrix A:\n");
	scanf("%d%d",&m1,&n1);
	int a[m1][n1];
	printf("enter the elements in matrix A (Row wise)\n");
	for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
	printf("enter the number of rows and coloumns in matrix B:\n");
        scanf("%d%d",&m2,&n2);
	int b[m2][n2];
	printf("enter the elements in matrix B (Row wise)\n");
        for(i=0;i<m2;i++)
                for(j=0;j<n2;j++)
                        scanf("%d",&b[i][j]);
	if(n1!=m2)
		printf("Given Matices can't be multipled\n");
	else
	{
		int c[m1][n2],sum=0,k;
		for(i=0;i<m1;i++)
       	 	{	
                	for(j=0;j<n2;j++)
                	{
                        	
                        	for(k=0;k<n1;k++)
                                	sum=sum+(a[i][k]*b[k][j]);
                	}	
			c[i][j]=sum;
			sum=0;
        	}
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}
	}
	
	
}
