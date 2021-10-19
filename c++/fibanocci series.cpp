//fibanocci series using recursion

#include<iostream>
using namespace std;
void fibanocci(int n)
{
	static int n1=0, n2=1,sum;
	if(n>0)
	{
		sum=n1+n2;
		cout<<sum<<" ";
		n1=n2;
		n2=sum;
		fibanocci(n-1);
	}
}
int main(){
	int n;
	cout<<"Enter no.of elements: ";
	cin>>n;
	cout<<"0 "<<"1 "; 
	fibanocci(n-2);
	
}
