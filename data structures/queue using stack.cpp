#include<iostream>
using namespace std;

int st1[100],st2[100];
int top1=-1,top2=-1;
int count=0;

void push1(int data){
  st1[++top1]=data;
}

void enqueue(){
  int data,i;
  cin>>data;
  push1(data);
  count++;
}

void display(){
  int i;
  for(i=0;i<=top1;i++)
  {
  	cout<<st1[i]<<" ";
  }
}

int main()
{
  int n;
  cin>>n;
  cout<<"Enter the size of stack:"<<endl;
  cout<<"Enter the stack values: "<<endl;
  cout<<"Queue elements are:"<<endl;
  for(int i=1;i<=n;i++)
  {
    enqueue();
  }
  //type your code
  return 0;
}
