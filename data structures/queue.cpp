#include<iostream>
#define size 5
using namespace std;
class queue{
	private: 
	int items[size],front,rear;
	public:
		queue(){
			front=-1;
			rear=-1;
		}
		bool isfull(){
			if(front==0 && rear==size-1)
			{
				return true;
				
			}
			return false;
		}
		bool isempty(){
			if(front==-1)
				return true;
			else
				return false;
		}
		void enqueue(int element)
		{
			if(isfull()){
				cout<<"queue is full";
			}
			else{
				if(front==-1) front=0;
				rear++;
				items[rear]=element;
				cout<<"Inserted"<<element<<endl;
			}
		}
		int dequeue(){
			int element;
			if(isempty())
			{
				cout<<"Queue is empty"<<endl;
				return(-1);
			}
			else
			{
				element=items[front];
				if(front>=rear)
				{
					front=-1;
					rear=-1;
					
				}
				else
					front++;
				cout<<"deleted -> "<<element<<endl;
				return (element);
			}
		}
		void display(){
			int i;
			if(isempty())
			{
				cout<<endl<<"empt queue"<<endl;
			}
			else{
				cout<<endl<<"Front -> "<<front;
				cout<<endl<<"Items -> ";
				for(i=front;i<=rear;i++)
				{
					cout<<items[i]<<"\t";
				
				}
						cout<<endl<<"Rear ->"<<rear<<endl;
			
			}
		}
		
};


int main(){
	queue q;
	q.dequeue();
	for(int i=1;i<5;i++)
		q.enqueue(i);
	q.enqueue(6);
	q.display();
	q.dequeue();
	q.display();
	return 0;
}
