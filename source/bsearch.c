// Applicable on Sorted elements. Time Complexity: (logn)

#include<stdio.h>

void  bsearch(int *a,int n,int re)
{	
	int i,beg,end,mid,flag=0;
	
	beg=0;end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(re<a[mid])
			end=mid-1;
		else if(re>a[mid])
			beg=mid+1;
		else if(re==a[mid])
		{
			printf("the required element is at location: %d\n",mid+1);
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
	printf(" 	==Binary Search==\n");
	printf("enter the no. of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the sorted elements: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the element to be searched: ");
	int re;
	scanf("%d",&re);
	bsearch(a,n,re);
	return 0;	
}

