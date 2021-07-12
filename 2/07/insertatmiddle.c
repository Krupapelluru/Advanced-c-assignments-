
/* this program to insert data at middle  */


#include<stdio.h>
#include<stdlib.h>

struct node
{

	int data;
	struct node *next;
}*head;


void creatlist(int n);
void printlist();
void insertatmiddle(int data,int pos);

int main()
{

	

	int data,n,pos;

	printf("enter the number of node\n");
	scanf("%d",&n);

	creatlist(n);

	printf("enter the data to insert at middle\n");
	scanf("%d",&data);
	printf("enter the position\n");
	scanf("%d",&pos);

   
    insertatmiddle( data,pos);

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



void insertatmiddle( int data,int pos)
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

    for(int i=2;i<=pos-1;i++)
    {

    	temp=temp->next;
    	if(temp==NULL)
    	{
    		break;
    	}
    }
    if(temp!=NULL)
    {
    	newnode->next=temp->next;
    	temp->next=newnode;
    }
    else
    {
    	printf("not able to insert at given position\n");
    }
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