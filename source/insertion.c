#include<stdio.h>
#include<stdlib.h>

void insertion(int *a,int n)
{
	int i,j,v,h;
	for(i=1;i<n;i++)
	{	
		v=a[i];
		h=i;
		while((h>0)&&(a[h-1]>v))
		{
			a[h]=a[h-1];
			h--;
		}		
		a[h]=v;
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
	printf("	==INSERTION SORT==\n");
	printf("enter the number of elements to sort:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertion(a,n);
	print(a,n);
}
