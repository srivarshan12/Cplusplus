#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
};
struct node *head;

void append(int data){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}

void display(){
	struct node* temp=head;
	if(head==NULL)
	{
		cout<<"STACK is empty "<<endl;
	}
	while(temp!=NULL)
	{
		cout<<"|"<<temp->data<<"|"<<endl;
		temp=temp->next;
		
	}
	
}

void pop(){
	struct node* temp=head;
	if(head==NULL)
	{
		cout<<"Stack is empty"<<endl;
		return;
	}
	cout<<temp->data<<" poped"<<endl;
	head=temp->next;
	
	free(temp);
}

int main(){
	append(10);
	append(20);
	append(30);
	append(40);	
	display();
	
	pop();
	display();
	
	pop();
	display();
	
	pop();
	display();
	
	pop();
	display();
	
	append(50);
	display();
		
	
	return 0;
	
}
