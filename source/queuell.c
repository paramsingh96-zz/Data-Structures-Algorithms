#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int info;
	struct node *link;
}node;
node *front=NULL;
node *rear=NULL;

void enqueue()
{	
	node *ptr;
	ptr=(node*)malloc(sizeof(node));
	int x;
	printf("enter the element\n");
	scanf("%d",&x);
	ptr->info=x;
	
	if((front==NULL)&&(rear==NULL))
	{
		front=ptr;
		rear=ptr;
		rear->link=NULL;
	}
	else
	{
		rear->link=ptr;
		ptr->link=NULL;
		rear=ptr;
	}			
}
void dequeue()
{
	if((front==NULL)&&(rear==NULL))
		printf("--QUEUE UNDERFLOW--\n");
	else if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		front=front->link;
	}
}
void printqueue()
{
	if((front==NULL)&&(rear==NULL))
		return;
	else 
	{
		node *ptr;
		for(ptr=front;ptr!=NULL;ptr=ptr->link)
			printf("%d ",ptr->info);
	}
}
int main()
{
	int ch=-1;
	while(ch!=0)
	{
		printf("	==Queue Using Array==\n");
		printf("Exit=0\n");
		printf("Enqueue=1\n");
		printf("Dequeue=2\n");
		printf("Queue Output=3\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 0: exit(0);
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: printqueue();
				break;
			default: printf("--Invalid Choice--\n");
		}
	}
	return 0;
	
}
