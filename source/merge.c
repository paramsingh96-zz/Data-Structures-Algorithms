// Merge Sort is a divide & conquer algorithm

#include<stdio.h>
#include<stdlib.h>

void merge(int a[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	
	int c[n1],d[n2];
	
	for(i=0;i<n1;i++)
		c[i]=a[l+i];
	for(j=0;j<n2;j++)
		d[j]=a[m+j+1];

	j=0;k=l;i=0;

	while((i<n1)&&(j<n2))
	{
		if(c[i]<=d[j])
		{
			a[k]=c[i];
			i++;
		}
		else
		{
			a[k]=d[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)
	{
		a[k]=c[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=d[j];
		j++;
		k++;
	}

}

void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+(r-1))/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);

		merge(a,l,m,r);
	}
}

void print(int a[],int n)
{
	int i;
	printf("sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}

void main()
{
	int i,n;
	printf("	==MERGE SORT==\n");
	printf("enter the number of elements to sort:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	print(a,n);
}
