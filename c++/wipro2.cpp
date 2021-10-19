#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int maxis=0,flag=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			flag++;
			if(flag>maxis)
			{
				maxis=flag;
			}				
		}
		else{
			flag=0;				
		}
	}
	cout<<"THE MAXIMUM LENGTH IS "<<maxis;	
}
