#include<stdio.h>
#include<stdlib.h>
void  msearch(int *a,int n,int re)
{	
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==re)
		{
			printf("the required element is present at location: %d \n",i+1);
			flag=1;
		}
	}
	if(flag==0)
		printf("the required element is not present\n");		
}
int main()
{
	int n,i;
	printf(" 	==Multiple Search==\n");
	printf("enter the no. of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the element to be searched: ");
	int re;
	scanf("%d",&re);
	msearch(a,n,re);
	
}

