#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
	int b[]={6,7,8,9,10,11,12};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	int p;
	int c[100],count=0;
	for(int i=0; i<m; i++)
	{
		c[count++]=a[i];
		p++;
		c[count+4]=b[i];
	}

//	for(int i=0;i<m;i++)
//	{
//		c[count++]=b[i];
//	}
	
	for(int i=0;i<p;i++)
	{
		cout<<c[i]<<" ";
	}
}
