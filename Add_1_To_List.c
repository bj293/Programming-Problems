/* C program for adding 1 to a linked list
   
   Insert --- Inserts an Element to the linked list from the beginning
   Add    --- Adds 1 to the linked  list
   Display --- Displays the whole linked list
    e.g. 3->4->9 + 1 = 4->5->0
    
*/
   

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;


int main()
{
	int choice;
    struct node*temp=head;
	while(1)
	{
	
	printf("Enter your choice :\n1.Insert (At Beginning)\n2.Add 1\n3.Display\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 0:exit(0);
		
		case 1:insert();
		break;
		
		case 2:Add1(head);
		break;
		
		case 3:traverse();
		break;

		default:printf("\nWrong choice\n");
		
    }   
}
	}
	
	int insert(void)
{
	int data;
		struct node*newnode,*temp;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter the data value  :  ");
		scanf("%d",&data);
		
		newnode->data=data;
	    if(head==NULL)
		{
			newnode->next=NULL;
			head=newnode;
		}
		else
		{
			newnode->next=head;
			head=newnode;
		}
		printf("\n Successfully added one node at the beginning.\n");
		
}


int traverse(void)
{
	struct node* temp;
	temp=head;
	if(head==NULL)
	{
		printf("\nEmpty List!!!\n");
		return;
	}
	while(temp!=NULL)
	{
		printf(" %d  ",temp->data);
		temp=temp->next;
	}
	
}


int Add1(struct node*temp)
{
	static int carry=1;
	if(temp->next)
	{
		Add1(temp->next);
	}
	if(temp==head)
	{
		temp->data+=carry;
		printf("\n 1 is Added to the list. ");
		return;
	}
	temp->data+=carry;
	carry=temp->data/10;
	temp->data%=10;
}
