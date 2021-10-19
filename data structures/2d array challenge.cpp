#include<iostream>
using namespace std;
int main(){
	int a[6][6],max=INT_MIN;
	int ans[4][4];
//	cout<<"Enter 6x6 array:"<<endl;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>a[i][j];
		}
	}
//	cout<<endl;
//	cout<<"the array is:"<<endl;
//	for(int i=0;i<6;i++)
//	{
//		for(int j=0;j<6;j++)
//		{
//			cout<<a[i][j]<<" ";
//	
//		}
//		cout<<endl;
//	}
//	cout<<"calculating the first column term:"<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]  <<" + "<<a[i][j+1]  <<" + "<<a[i][j+2]<<" = "<<a[i][j]+a[i][j+1]+a[i][j+2]<<"   ";
			cout<<a[i+1][j+1]<<"   ";
			cout<<a[i+2][j]<<" + "<<a[i+2][j+1]<<" + "<<a[i+2][j+2]<<" = "<<a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]<<"   ";
			cout<<endl;	
		
			ans[i][j]=a[i][j]+a[i][j+1]+a[i][j+2]+  a[i+1][j+1]+  a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
//			cout<<endl;	

		}
//		cout<<endl<<endl;
		
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{	cout<<ans[i][j]<<endl;
			if(ans[i][j]>max)
			{
				max=ans[i][j];
			}
		}
	}
	cout<<max;
}
