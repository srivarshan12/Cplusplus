#include<iostream>
using namespace std;
void rotatebyone(int arr[],int n)
{
	
	int temp=arr[0];
	for(int i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}

void leftrotate(int arr[],int rot,int n)
{
	for(int i=0;i<rot;i++)
	{
		rotatebyone(arr,n);
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n=6;
	cin>>n;
	int arr[n];
	int rot;
	cin>>rot;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	int temp[rot],neww[n];
	leftrotate(arr,rot,n);
	display(arr,n);
}
