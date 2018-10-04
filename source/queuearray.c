// Circular Queue

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX];
int front=-1;
int rear=-1;

void enqueue()
{	
	int b;
	if((rear+1)%MAX==front)
	{
		printf("--QUEUE OVERFLOW--\n");
		return;
	}
	else if((rear==-1)&&(front==-1))
	{
		rear++;
		front++;
	}
	else	
	{	
		rear=(rear+1)%MAX;
	}
	printf("enter the element to be pushed: ");
	scanf("%d",&b);	
	a[rear]=b;
}
void dequeue()
{
	if((front==-1)&&(rear==-1))
		printf("--QUEUE UNDERFLOW--\n");
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==MAX-1) 
		front=0;
	else
		front++;
}
void printqueue()
{
	int i;
	if((front==-1)&&(rear==-1))
		return;
	else if(rear<front)
	{	
		for(i=front;i<=MAX-1;i++)
			printf("%d ",a[i]);
		for(i=0;i<=rear;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
			printf("%d ",a[i]);
		
		printf("\n");
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
