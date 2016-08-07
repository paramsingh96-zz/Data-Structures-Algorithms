#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX];
int top=-1;

void push()
{	
	int b;
	if(top==MAX-1)
		printf("--STACK OVERFLOW--\n");
	else
	{
		printf("enter the element to be pushed: ");
                scanf("%d",&b);	
	}	a[++top]=b;
}
void pop()
{
	if(top==-1)
		printf("--STACK UNDERFLOW--\n");
	else
		top--;
}
void printstack()
{
	int i;
	if(top==-1)
		return;
	else
	{
		for(i=0;i<=top;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
}
int main()
{
	int ch=-1;
	while(ch!=0)
	{
		printf("	==Stack Using Array==\n");
		printf("Exit=0\n");
		printf("Push=1\n");
		printf("Pop=2\n");
		printf("Stack Output=3\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 0: exit(0);
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: printstack();
				break;
			default: printf("--Invalid Choice--\n");
		}
	}
	
}
