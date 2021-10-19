#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int temp=0;
	for(int i=0;i<n-1;i++)
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
	cout<<endl;
	cout<<"Sorted elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	int b[n],count=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			b[count++]=a[i];
		}
	}
	b[count++]=a[n-1];
	cout<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
