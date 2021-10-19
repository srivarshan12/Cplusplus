#include<iostream>
using namespace std;
int main(){
	int a[]={10,10,20,30,20,30};
	int n=sizeof(a)/sizeof(a[0]);
	int b[100];
	int temp=0,count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1]);
		{
			b[count++]=a[i];
		}
	}
	b[count++]=a[n-1];
	
	
	for(int i=0;i<count;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	
}
