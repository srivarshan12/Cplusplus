#include<bits/stdc++.h>
using namespace std;
int main(){
//	int n=3;
//	int n=4;
	int n=6;
//	int a[n][n]={1,2,3,4,5,6,7,8,9};
//	int a[n][n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//	int a[n][n];
	int a[6][6]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};

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
	cout<<endl<<endl;
//	i,j increasing size decreasing 
	for(int iincrease=0,jincrease=0, sizedecrease=size; count<n*n ;jincrease++,iincrease++,sizedecrease--)
	{
		for(int i=iincrease,j=jincrease;i<sizedecrease;i++)
		{
			cout<<a[j][i]<<" ";
			count++;
		}
		cout<<endl<<endl;
//		for(int i=1,j=1;i<size-1;i++)
//		{
//			cout<<a[j][i]<<" ";
//		}
		
		for(int i=iincrease;i<sizedecrease;i++)
		{
			cout<<a[i][sizedecrease]<<" ";
			count++;
		}
		cout<<endl<<endl;
//		for(int i=1;i<size-1;i++)
//		{
//			cout<<a[i][size-1]<<" ";
//		}		
		
			
		for(int i=sizedecrease;i>1;i--)
		{
			cout<<a[sizedecrease][i]<<" ";
			count++;
		}
		cout<<endl<<endl;

//		for(int i=size+1;i>=1;i--)
//		{
//			cout<<a[size-1][i]<<" ";
//		}
			
		for(int i=sizedecrease,j=jincrease; i>=1; i--)
		{	
			cout<<a[i][j]<<" ";
			count++;
		}
		cout<<endl<<endl;
		
		
//		for(int i=1j=1;i<size-1;i++)
//		{
//			cout<<a[j][i]<<" ";
//		}
		
	}
}
