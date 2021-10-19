#include<iostream>
using namespace std;

class point
{
private:
	int x, y;
public:
	point()
	{
		cout<<"const"<<endl;
	}
	virtual void func()=0;
	
};
class derived: public point{
	public:
	virtual void func(){
		cout<<"he";	
	}
	
};
int main()		
{	point ptr;
	derived d;
//	ptr= &d;
	ptr.func();
	d.func();
	return 0;
}

