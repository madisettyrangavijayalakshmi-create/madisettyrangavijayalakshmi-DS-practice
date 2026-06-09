#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL,*temp,*last,*t1,*t2;
void firstinsert()
{
	int e;
	temp=(struct node*)malloc (sizeof(struct node));
	printf("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
	}
}
void lastinsert()
{
	int e;
	temp=(struct node*)malloc (sizeof(struct node));
	printf("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		last->link=temp;
		last=temp;
	}
}
void middleinsert()
{
	int e,pos,i=1;
	temp=(struct node*)malloc (sizeof(struct node));
	printf("\n\t enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	printf("\n enter the position to insert");
	scanf("%d",&pos);
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		printf("\n inside of middle insert fun");
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		temp->link=t2->link;
		t2->link=temp;
	}
}
void firstdelete()
{
	if(start==NULL)
	{
		printf("\n\t linked list is empty,no nodes to perform delete operation");
	}
	else
	{
		start=start->link;
		printf("\n\t first node is deleted successfully");
		
	}
}
void lastdelete()
{
	if(start==NULL)
	printf("\n\t no nodes in linked list to delete");
	else
	{
		t1=start;
		while(t1->link!=NULL)
		{
			t2=t1;
			t2=t1->link;
		}
	
	t2->link=NULL;
	last=t2;
   }
}
void middledelete()
{
	int pos,i=1;
	printf("\n enter the position to delete the node");
	scanf("%d",&pos);
	if(start=NULL)
	printf("\n\t no element to delete,linked list is EMPTY");
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		t2->link=t1->link;
	}
}
void disp()
{
	if(start==NULL)
	{
		printf("\n no elements in linked list....");
	}
	else
	{
		printf("\n\t\t linked list elements are....");
		temp=start;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	int ch,k;
	while(1)
	{
		printf("\n\t\t\t...linked list operations...");
		printf("\n\n\t\t1.firstinsert");
		printf("\n\n\t\t2.lastinsert");
		printf("\n\n\t\t3.middleinsert");
		printf("\n\n\t\t4.firstdelete");
		printf("\n\n\t\t5.lastdelete ");
		printf("\n\n\t\t6.middledelete");
		printf("\n\n\t\t7.display");
		printf("\n\n\n\n\t\t8.exit");
		printf("\n\n\t enter your choice..");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:firstinsert();     break;
			case 2:lastinsert();      break;
			case 3:middleinsert();    break;
			case 4:firstdelete();     break;
			case 5:lastdelete();      break;
			case 6:middledelete();    break;
			case 7:disp();            break;
			case 8:exit(0);            
		}	
	}
	return 0;
}

