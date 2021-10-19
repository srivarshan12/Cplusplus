#include<iostream>
using namespace std;
int main(){
	int a[]={30,40,10,0,90};
	int n= sizeof(a)/sizeof(a[0]);
	n=n-1;
	cout<<n<<endl;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
