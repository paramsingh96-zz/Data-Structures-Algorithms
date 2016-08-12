#include<stdio.h>
#include<stdlib.h>
void  lsearch(int *a,int n,int re)
{	
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==re)
		{
			printf("the required element is present\n");
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("the required element is not present\n");		
}
int main()
{
	int n,i;
	printf(" 	==Linear Search==\n");
	printf("enter the no. of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the element to be searched: ");
	int re;
	scanf("%d",&re);
	lsearch(a,n,re);
	
}

