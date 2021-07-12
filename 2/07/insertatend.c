
/* this program to insert data at begning */


#include<stdio.h>
#include<stdlib.h>

struct node
{

	int data;
	struct node *next;
}*head;


void creatlist(int n);
void printlist();
void insertatend(int data);

int main()
{

	

	int data,n;

	printf("enter the number of node\n");
	scanf("%d",&n);

	creatlist(n);

	printf("enter the data to insert at end\n");
	scanf("%d",&data);

   
    insertatend( data);

    printf("the data in the linked list is\n");
    printlist();


}

void creatlist(int n)
{
   struct node *temp,*newnode;
   int data,i; 

	head= (struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("memeory is full\n");
	}

	printf("enter the data to insert at 1st node\n");
	scanf("%d",&data);

	head->data=data;
	head->next=NULL;

	temp=head;

	for(i=2;i<=n;i++)
	{

		newnode=(struct node*)malloc(sizeof(struct node));

		if(newnode==NULL)
	    {
		printf("memeory is full\n");
	     }

	printf("enter the data %d st node \n",i);
	scanf("%d",&data);

	newnode->data=data;
	newnode->next=NULL;
	temp->next=newnode;
	temp=temp->next;
	}

}



void insertatend( int data)
{


	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
	{
		printf("memeory is full\n");
		
	}
    else
    {
    newnode->data=data;
    newnode->next=NULL;

    temp=head;

    while(temp != NULL && temp->next!=NULL)
    {
    	temp=temp->next;

    }

    temp->next=newnode;
}

printf("data is inserted succesufully\n");
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