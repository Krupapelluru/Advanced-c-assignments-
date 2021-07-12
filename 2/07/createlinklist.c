
/* this program to create linked list*/


#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
}*head;

void printlist();

int main()
{

	struct node *newnode,*temp;
	int n,data;

	printf("enter the number of node\n");
	scanf("%d",&n);


	head= (struct node *)malloc(sizeof(struct node));


	if(head==NULL)
	{
		printf("the memory is full\n");
	}

	printf("enter the first node data:\n");

	scanf("%d",&data);
	head-> data=data;
	head->next=NULL;

	temp=head;

	for(int i=2;i<=n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));

	if(newnode==NULL)
	{
		printf("the memory is full\n");
	}

     printf("enter the %d node data\n",i);
     scanf("%d",&data);

     newnode->data=data;
     newnode->next=NULL;

     temp->next=newnode;
     temp=temp->next;


	}

	printf("the enterd data is \n");
	printlist();

}


void printlist()
{


	struct node *temp;


	if(head==NULL)
	{
		printf("no data is present\n");
	}

	temp=head;

	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}

}
