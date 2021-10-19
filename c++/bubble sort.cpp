#include<iostream>
using namespace std;
int main(){
	int arr[]={20,130,40,10,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
