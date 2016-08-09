#include<stdio.h>
#include<stdlib.h>

void bubble(int *a,int n)
{
	int i,j,temp;
	for(i=n-2;i>=0;i--)
		for(j=0;j<=i;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}
void print(int *a,int n)
{
	int i;
	printf("sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}

void main()
{
	int i,n;
	printf("	==BUBBLESORT==\n");
	printf("enter the number of elements to sort:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubble(a,n);
	print(a,n);
}
