#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	int data;
  	struct node* next;
};
struct node* head;
void append(int d)
{
struct node* newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=d;
newnode->next=head;
head=newnode;
}

void display(){
	struct node *temp=head;
  	while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    } 
  cout<<endl;
}
void delete1(){
	struct node *temp=head;
  	if(head==NULL){
    	cout<<"Stack is empty"<<endl;
    }
  	else{
      cout<<"Deleted element is "<<temp->data<<endl;	
      head=temp->next;
      temp->next=NULL;
      free(temp);
    }
}
int main()
{
  int d,c=0;
  do{
  	cin>>d;
    if(d>0)
    {
    	append(d);
      	c++;
    }
  }while(d!=-1);
  cout<<"Before deleting:"<<endl;
  display();
  while(c!=0){
  	delete1();
    c--;
    
  }
  cout<<"Stack is empty"<<endl;
  return 0;
}
