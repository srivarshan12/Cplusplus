#include<bits/stdc++.h>
using namespace std;
int main(){
//	int n=3;
//	int n=4;
	int n=5;
//	int a[3][3]={1,2,3,4,5,6,7,8,9};
//	int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int a[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";

		}
		cout<<endl;
	}
	int size=n-1;
	int count=0;
	cout<<endl;cout<<endl;
	
//	for(int size=n-1;size<n;size--)
//	{


//	i,j increasing size decreasing 
		
			for(int i=0,j=0;i<size;i++)
			{
				cout<<a[j][i]<<" "<<endl;
				count++;
			}
	//		for(int i=1,j=1;i<size-1;i++)
	//		{
	//			cout<<a[j][i]<<" ";
	//		}	
			for(int i=0;i<size;i++)
			{
				cout<<a[i][size]<<" "<<endl;
				count++;
			}
	//		for(int i=1;i<size-1;i++)
	//		{
	//			cout<<a[i][size-1]<<" ";
	//		}				


			for(int i=size;i>=1;i--)
			{
				cout<<a[size][i]<<" "<<endl;
				count++;
			}
	//		for(int i=size-1;i>=1;i--)
	//		{
	//			cout<<a[size-1][i]<<" ";
	//		}




			for(int i=size,j=0; i>=1; i--)
			{	
				cout<<a[i][j]<<" "<<endl;
				count++;
			}
			
//			for(int i=size-1,j=1;i>1;i--)
//			{
//				cout<<a[i][j]<<" ";
//			}


	
	
			
			for(int i=1;i<size-1;i++)
			{
				cout<<a[1][i]<<" "<<endl;
			}
			
			
			for(int i=1;i<size-1;i++)
			{
				cout<<a[i][size-1]<<" "<<endl;
			}		
	
	
			for(int i=size-1;i>1;i--)
			{
				cout<<a[size-1][i]<<" "<<endl;
			}
			
			for(int i=size-1-1;i>1;i--)
			{
				cout<<a[i][1]<<" ";
			}
		
//	}
	
	
}
