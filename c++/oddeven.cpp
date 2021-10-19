#include<bits/stdc++.h>
using namespace std;
int i=0;
void addinarray(int a,int n,int b[])
{
	while(i<=n)
	{
		b[i]=a;
		cout<<endl<<b[i]<<" inserted in "<<i<<endl;
		i++;
		break;		
	}
	
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n];
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{	cout<<a[i]<<" is even"<<endl;
			addinarray(a[i],n,b);
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{	cout<<a[i]<<" is even"<<endl;
			addinarray(a[i],n,b);
		}
	}
		
	for(int i=0;i<n;i++)
	{
		cout<<endl<<b[i]<<endl;
	}
}
