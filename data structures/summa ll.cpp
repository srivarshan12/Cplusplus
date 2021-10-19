#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
  	struct node* next;
};
struct node *head;


void insert(int data)
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  struct node *temp=head;
  if(head==NULL)
  {
  	head=newnode;
 	return;
  }
  	while(temp->next!=NULL)
    {
	      	temp=temp->next;
    }
    temp->next=newnode;
 
}

void display(){
  struct node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
  }
 
}


int main()
{
  int ele;
  cin>>ele;
  while(1)
  {
  	if(ele<0){
    	break;
    }
    insert(ele);
  }
 cout<<"Before inserting the value:"<<endl;
  display();
   return 0;
}


