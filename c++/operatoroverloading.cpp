#include<iostream>
using namespace std;
class base{
	private:
		int real,imag;
	public:
		base(int r, int i){
			real=r;
			imag=i;
		}
		base(){
		}
		void info()
		{
			cout<<real<<" "<<imag<<endl;
		}
		base operator+(base const &b) {
			base d;
			d.real=real+b.real;
			d.imag=imag+b.imag;
			return d;
		}
		
};
int main(){
	base a(10,20);
	base b(30,40);
	base c(50,60);
	a.info();
	b.info();
	c.info();
	base d=a+b+c;    //b.add(c)
	d.info();
	return 0;
}	
