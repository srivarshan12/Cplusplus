#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};

void append(node **head,int data){
	node *newnode=new node();
	node *last= *head;
	newnode->data=data;
	newnode->next=NULL;	
	if(*head==NULL){
		*head=newnode;
		cout<<"initialised";
		return;
	}
	
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=newnode;
	cout<<endl<<newnode->data<<"inserted";
	return;
}

void print(node* node){
	while(node!=NULL){
		cout<<node->data;
		node=node->next;
	}
	
}int main(){
	node *head=NULL;
	append(&head,10);
	append(&head,20);
	append(&head,30);
	print(head);
}
