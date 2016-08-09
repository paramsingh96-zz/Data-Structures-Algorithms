#include<stdio.h>
#include<stdlib.h>

void selection(int *a,int n)
{
	int i,j,temp;
	for(i=0;i<=n-2;i++)
		for(j=i+1;j<=n-1;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
	printf("	==SELECTION SORT==\n");
	printf("enter the number of elements to sort:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	selection(a,n);
	print(a,n);
}
