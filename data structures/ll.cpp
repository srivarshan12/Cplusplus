#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node* next;
};
struct node* head;

void appendatlast(int data){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
  	newnode->next=NULL;
  	if(head==NULL){
		head=newnode;
		return;
	}
	
  	struct node* temp=head;
 	while(temp->next!=NULL)
    {
    	temp=temp->next;
    }
  	temp->next=newnode;
  
}

void insertat(int pos,int data){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	struct node* temp=head;
	for(int i=0;i<pos-2;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;	
}


void display(){
	struct node* temp=head;
	while(temp!=NULL)
	{	
		cout<<endl;
      	cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
	
}

void display1(){
	struct node* temp=head;
	while(temp!=NULL)
	{	
     	cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<endl;
	
}


int main()
{
  int data;
  while(1){
  cin>>data;
    if(data<0)
    {
      break;
    }
    appendatlast(data);
  }
  cout<<"Before inserting the value:";
  display();
  int pos,val;
  cout<<"Enter the position and value to be inserted:"<<endl;
  cin>>pos>>val;
  insertat(pos,val);
  cout<<"After inserting the value:"<<endl;	
  display1();
  return 0;
}
