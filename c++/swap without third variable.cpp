#include<iostream>
using namespace std;
int main(){
	int a=10;
	int b=20;
	cout<<a<<" "<<b;
	int sum=0;
	sum=a+b; //sum=30
	b=sum-b; // b= 30-20=10
	a=sum-a; // a= 30-10=20
	cout<<endl<<a<<" "<<b;
}
