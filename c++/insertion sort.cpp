#include<iostream>
using namespace std;
int main(){
	int temp=0,j;
	int a[]={110,0,80,3,50,20,30};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
//	int a[]={110,0,80,3,50,20,30};
for(int i=1;i<n;i++)
{
	temp=a[i];
	j=i-1;
	while(j>=0 && a[j]>temp)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
