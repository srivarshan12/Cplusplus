#include<iostream>
using namespace std;
int main(){
	int b[]={7,1,3,2,4,5,6};
	int n=sizeof(b)/sizeof(b[0]);
	int a[n],count=0;
	for(int i=0,j=1 ;i<n ;i++,j++)
	{
		a[i]=j;
		cout<<a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==i+1)
		{
			
		}
		else{
			a[i]=a[i-1];
			count++;
		}
	}
}
