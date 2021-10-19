#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}*head,*last;

struct node* nodegen()
{
	struct node *ptr= (struct node*)malloc(sizeof(struct node));
	return ptr;
}		
void append(int n)
{
	struct node* temp;
	
	if(head==NULL)
	{ 	//first node in list
		head=nodegen();
		head->data= n;
		head->next= NULL;
		last=head;
		printf("new list initialised");
		
	}
	else
	{
//		cout<<"another node inserted";
		temp=nodegen();
		temp->data=n;
		last   ->next=temp;
		temp->next=NULL;
		last=temp;
	}
}
	

void displaylist(){
	struct node *temp=head;
	if(temp==NULL)
	{
		printf("list is empty\n");
		return;
	}
	while(temp!=NULL)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}
}


int main(){
	
	append(10);
	append(20);
	append(30);
	displaylist();
}
