#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *link;
}node;

node *top=NULL;

void push()
{	
	node *ptr;
	int x;
	printf("Enter the value to be inserted\n");
	scanf("%d",&x);
	ptr=(node*)malloc(sizeof(node));
	ptr->info=x;
	if(top==NULL)
	{
		top=ptr;
		ptr->link=NULL;
	}
	else
	{
		ptr->link=top;
		top=ptr;	
	}	
}
void pop()
{
	node *ptr;
	if(top==NULL)
		printf("STACK UNDERFLOW\n");
	else
	{
		ptr=top;
		top=top->link;
	}
}
void printstack()
{
	node *ptr;
	for(ptr=top;ptr!=NULL;ptr=ptr->link)
		printf("%d ",ptr->info);	
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
	return 0;
	
}
