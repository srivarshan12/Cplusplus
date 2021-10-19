#include<iostream>
using namespace std;
int main(){
	int n=10,sum=0;
	int n1=0,n2=1;
	for(int i=2;i<=n;i++)
	{	n1=0;
		n2=1;
		for(int j=1;j<i;j++)
		{
		sum=n1+n2;
		cout<<sum<<" ";
		n1=n2;
		n2=sum;
		}
		cout<<endl;
	}
	
}
