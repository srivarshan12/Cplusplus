#include<bits/stdc++.h>
using namespace std;
int sort(int a[], int n)
{
	int temp=0;
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
}


int removeduplicates(int a,int n)
{
	
	int temp[n],j=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			temp[j++]=a[i];
		}
	}
	temp[j++]=a[n-1];
	cout<<"Duplicates removed: ";
	for(int i=0;i<j;i++)
	{
		cout<<temp[i]<<" ";
	}
	cout<<endl;
}

int merge(int a,int b,int n,int m)
{
	for(int i=0;i<m;i++)
	{
		a[n++]=b[i];
	}
//	sort(a,b);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[]={3,1,2,2};
	int b[]={4,3,2,1};
	sort(a,(sizeof(a)/sizeof(a[0])));
	removeduplicates(a,(sizeof(a)/sizeof(a[0])));
	
	sort(b,(sizeof(b)/sizeof(b[0])));	
	removeduplicates(b,(sizeof(b)/sizeof(b[0])));
	
	merge(&a,&b,(sizeof(a)/sizeof(a[0])),(sizeof(b)/sizeof(b[0])));
}
