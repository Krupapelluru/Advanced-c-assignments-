
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
void deletlastnode();

int main()
{

	

	int data,n,choice;

	printf("enter the number of node\n");
	scanf("%d",&n);

	creatlist(n);

	printf("enter the choice \n");
	scanf("%d",&choice);

	if(choice==1)
      deletlastnode();

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



void  deletlastnode()
{


	struct node *todelet,*secondlastnode;

	if(head==NULL)
	{
		printf("the list is empty\n");
	}
	else
	{
		todelet=head;
		secondlastnode=head;

		while(todelet->next!=NULL)
		{
			secondlastnode=todelet;
			todelet=todelet->next;
		}

		if(todelet==head)
		{
			head=NULL;
		}
		else
		{

		secondlastnode->next=NULL;
	}

		printf("the deleted data is %d\n",todelet->data);

		free(todelet);
	}

	printf("data is deleted  succesufully\n");
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