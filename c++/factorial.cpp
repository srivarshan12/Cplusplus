//factorial

#include<iostream>
using namespace std;
int main(){
	int n,sum=1;
	cin>>n;
	if(n==0)
	{
		cout<<"0";
	}
	else{
	for(int i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	cout<<sum;
	
}
}
