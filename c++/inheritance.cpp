#include<iostream>
using namespace std;
class base{
	private:
		friend void func(base a){
			cout<<"base class function"<<endl;
		}
	public:
		virtual void display(){
			
		}
};

class derived:public base{
	 public:
		void display(){
			cout<<"derived class"<<endl;
		}
		 
};

class derived1:public derived{
	public:
		void display(){
			cout<<"derived1 class"<<endl;
		}
};

int main(){

	base *b,a;
	derived1 d;
	b=&d;
	b->display();
	a.func(a);	
	
}
