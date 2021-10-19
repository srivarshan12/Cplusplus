#include<iostream>
using namespace std;

int stack[5],n=5,top=-1;

void push(int data){
	if(top>=n-1)
	{	
		cout<<"stack overflow"<<endl;
	}
	else{
		top++;
		stack[top]=data;
	}
}

void pop()
{
	if(top<=-1)
	{
		cout<<"stack underflow"<<endl;
	}
	else{
		cout<<stack[top]<<" poped"<<endl;
		top--;	
	}
}

void display(){
	if(top<0)
	{
		cout<<"stack is empty"<<endl;
	}
	else{
		for(int i=top;i>=0;i--)
		{
			cout<<stack[i]<<endl;
			
		}
	}
}
	

int main(){

	push(10);
	push(20);
	push(30);
	push(40);
	display();
	
}
