//prime number

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int m=n/2;
int flag=0;
for(int i=2;i<=m;i++)
{
	if(n%i==0)
	{
		cout<<"Not prime";
		flag=1;
		break;
	}
	
}
if(flag==0)
{
	cout<<"Prime";
}
return 0;
}
