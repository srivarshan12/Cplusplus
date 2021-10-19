#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp[n];
	int ls=n-2,j=0;
	for(int i=ls;i<n;i++)
	{
		temp[j++]=arr[i];
	}
	
	for(int i=0;i<ls;i++)
	{
		temp[j++]=arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<temp[i];
	}
}
