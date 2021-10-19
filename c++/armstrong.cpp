//armstrong 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter number: ";
	cin>>n;
	int temp=n;
	int rem=0,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==temp)
		cout<<"Yes";
	else
		cout<<"No";
}
