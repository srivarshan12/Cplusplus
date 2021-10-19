#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=10,sum=0,n1=0,n2=1;
	cout<<n1<<" "<<n2<<" ";
	for(int i=2;i<n;i++)
	{
		sum=n2+n1;
		cout<<sum<<" ";
		n1=n2;
		n2=sum;	
	}
}
