#include<iostream>
using namespace std;
int main(){
	int n=6;
	for(int j=1;j<=6;j++)
	{
		cout<<"*";
	}
	cout<<endl;

	for(int i=1;i<=6-2;i++)
	{
		cout<<"*";
		for(int j=1;j<=4;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	
	for(int j=1;j<=6;j++)
	{
		cout<<"*";
	}
}
