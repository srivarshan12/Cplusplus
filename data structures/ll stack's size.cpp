#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	int data;
  struct node* next;
};
struct node* head;

void append(int d){
struct node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=d;
  newnode->next=head;
  head=newnode;
}
void size(){
  struct node* temp=head;
  int c=0;
  while(temp!=NULL){
  	c++;
  	temp=temp->next;  
  }
  cout<<c*8<<endl;
  
}
int main()
{
  int d;
  do{
    cin>>d;
    if(d>0)
    {
      append(d);
    }
  }while(d>=0);
    size();
  return 0;
}
